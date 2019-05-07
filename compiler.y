%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int yylineno;
int scopeY = -1;
int tCounter = 0;
char *tempString;
bool FindVariableSymbolTable(char *ident);
bool IsVariableInitialized(char *ident);
bool IsVariableInteger(char *ident);
%}

%union{
	int iVal;
	float fVal;
	char* sVal;
}

%token markazi se chalo jabtak
%token agar agarwarna warna likho
%token hindsa jumla booliyayi aasharia
%token <sVal> khaali sahih ghalat 
%token <sVal> stringliteral 
%token <sVal> identifier
%token <fVal> decimal
%token <iVal> integer
%token comma semicolon	

%type <sVal> ADDEXPRESSION MULTIPLYEXPRESSION TERMINALEXPRESSION
%type <sVal> RELATIONALEXPRESSION LOGICALEXPRESSION BOOLOPTIONS RELATIONALOPERATORS LOGICALOPERATORS NOTOPERATOR
%type <sVal> SELECTIONSTATEMENT IFSTATEMENT ELSEIFSTATEMENT ELSESTATEMENT

%start START
%left LRP RRP LCP RCP
%right INO DCO
%left MUL DIV MOD PLS MIS
%left <sVal> LT LTE GT GTE IEQ NEQ 
%left <sVal> NOT AND OR
%right EA AA SA MA DA 

%%
START: markazi LRP RRP COMPOUNDSTATEMENT 
	; 
/* assignment operators like +=, -=, *=, /= */
ASSIGNMENTOPERATORS: MA | DA | AA | SA
	;
/* relational operators like >, <, >=, <=, ==, != */
RELATIONALOPERATORS: GT | LT | GTE | LTE | IEQ | NEQ
	;
LOGICALOPERATORS: AND | OR
	;
NOTOPERATOR: NOT
	;
/* increment and decrement operators like ++,-- */
INCDECOPERATORS: INO | DCO
	;
BOOLTYPE: booliyayi
	;
BOOLOPTIONS: sahih | ghalat
	;
FLOATTYPE: aasharia
	;
NUMBERTYPE: hindsa
	;
STRINGTYPE: jumla
	;
NUMBERS: integer | decimal
	;
COMPOUNDSTATEMENT: LCP MULTIDECLARATION  MULTISTATEMENT RCP {/*printf("Increment Scope = %d\n", ++scopeY);*/}
	;	
MULTIDECLARATION: DECLARATION MULTIDECLARATION 
	| 
	;
MULTISTATEMENT: STATEMENT MULTISTATEMENT 
	| 
	;
DECLARATION: NUMBERTYPE identifier semicolon 
	| STRINGTYPE identifier semicolon 
	| FLOATTYPE identifier semicolon 
	| BOOLTYPE identifier semicolon
	| NUMBERTYPE identifier EA integer semicolon {printf("%s = %d\n", $2, $4);}
	| STRINGTYPE identifier EA stringliteral semicolon {printf("%s = %s\n", $2, $4);}
	| FLOATTYPE identifier EA decimal semicolon {printf("%s = %f\n", $2, $4);}
	| BOOLTYPE identifier EA BOOLOPTIONS semicolon {printf("%s = %s\n", $2, $4);}
	; 
STATEMENT: SELECTIONSTATEMENT
	| ITERATIONSTATEMENT
	| EXPRESSIONSTATEMENT
	| PRINTSTATEMENT
	;
PRINTSTATEMENT: likho LRP stringliteral RRP semicolon	{printf("print %s\n", $3);}
	| likho LRP stringliteral comma identifier RRP semicolon {
			bool ret = FindVariableSymbolTable($5); 
			if(!ret){
				yyerror("Variable not declared!");
				exit(1);
			}
			printf("print %s, %s\n", $3, $5);
		}
	| likho LRP identifier RRP semicolon {	
			bool ret = FindVariableSymbolTable($3); 
			if(!ret){
				yyerror("Variable not declared!");
				exit(1);
			}	
			printf("print %s\n", $3);
		}
	;
SELECTIONSTATEMENT: IFSTATEMENT ELSEIFSTATEMENT ELSESTATEMENT
	;
IFSTATEMENT: agar LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT {
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("if %s goto st+3\n", $3);
			printf("%s = %s\n",temp, "0");
			printf("goto st+2\n");
			printf("%s = %s\n",temp, "1");
		    	$$ = strdup(temp);
		}	
	;
ELSEIFSTATEMENT: agarwarna LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT 	{
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("if %s goto st+3\n", $3);
			printf("%s = %s\n",temp, "0");
			printf("goto st+2\n");
			printf("%s = %s\n",temp, "1");
		    	$$ = strdup(temp);
		}
	| {}
	;
ELSESTATEMENT: warna COMPOUNDSTATEMENT {}
	| {}
	;
ITERATIONSTATEMENT: jabtak LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT
        | chalo LRP integer se integer RRP COMPOUNDSTATEMENT
	;
LOGICALEXPRESSION: LRP RELATIONALEXPRESSION RRP LOGICALOPERATORS LRP RELATIONALEXPRESSION RRP {
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n", temp, $2, $4, $6);
		    	$$ = strdup(temp);
		}
 	| NOTOPERATOR LRP LOGICALEXPRESSION RRP {	//RELATIONALEXPRESSION
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s\n", temp, $1, $3);
		    	$$ = strdup(temp);
		}
	| RELATIONALEXPRESSION { $$ = $1; }
	;
RELATIONALEXPRESSION: identifier RELATIONALOPERATORS integer {
			bool ret1 = FindVariableSymbolTable($1); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger($1);			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			char num[5]; 
			sprintf(num, "%d\0", $3);
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, $1, $2 ,num);
		    	$$ = strdup(temp);
		}
	| identifier RELATIONALOPERATORS identifier {
			bool ret1 = FindVariableSymbolTable($1); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger($1);			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			bool ret3 = FindVariableSymbolTable($3); 
			if (!ret3){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret4 = IsVariableInteger($3);			
			if (!ret4){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, $1, $2, $3);
		    	$$ = strdup(temp);
		}
	| integer RELATIONALOPERATORS integer {
			char* num[5]; 
			sprintf(num, "%d\0", $1);
			char* num2[5]; 
			sprintf(num, "%d\0", $3);
			char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s %s %s\n",temp, num, $2, num2);
		    	$$ = strdup(temp);
		}
	| BOOLOPTIONS {
			char temp[5];
			sprintf(temp,"t%d",tCounter++);
			printf("%s = %s\n",temp, $1);
			$$ = strdup(temp);
		}
	;
/* Note: 	
	1) the first two rules of EXPRESSIONSTATEMENT will cater all assignment operators except for =;
	2) the last rule will cater assignment (=) 
*/
EXPRESSIONSTATEMENT: identifier ASSIGNMENTOPERATORS identifier semicolon
	| identifier ASSIGNMENTOPERATORS NUMBERS semicolon
	| identifier INCDECOPERATORS semicolon
	| INCDECOPERATORS identifier semicolon
	| identifier EA ADDEXPRESSION semicolon {
			bool ret1 = FindVariableSymbolTable($1); 
			if (!ret1){
				yyerror("Variable not declared!");
				exit(1);
			}
			bool ret2 = IsVariableInteger($1);			
			if (!ret2){
				yyerror("Incompatible datatypes!");
				exit(1);
			}
			InitializeVariable($1);
			//UpdateVariableValue($1, atoi($3)); 
			//printf("Total = %d\n", $3);
			printf("%s = %s\n", $1, $3);
		}
	;
ADDEXPRESSION: ADDEXPRESSION PLS MULTIPLYEXPRESSION {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s + %s\n",temp, $1, $3);
		    	$$ = strdup(temp);
		}
	| ADDEXPRESSION MIS MULTIPLYEXPRESSION {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s - %s\n",temp, $1, $3);
		    	$$ = strdup(temp);
		}
	| MULTIPLYEXPRESSION {$$ = $1;}
	;
MULTIPLYEXPRESSION: MULTIPLYEXPRESSION MUL TERMINALEXPRESSION {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s * %s\n",temp, $1, $3);
		    	$$ = strdup(temp);
		}
	| MULTIPLYEXPRESSION DIV TERMINALEXPRESSION {
		    	char temp[5];
		    	sprintf(temp,"t%d",tCounter++);
			printf("%s = %s / %s\n",temp, $1, $3);
		    	$$ = strdup(temp);
		}
	| TERMINALEXPRESSION {$$ = $1;}
	;
TERMINALEXPRESSION: integer {
			char* temp[5]; 
			sprintf(temp, "%d\0", $1);
			$$ = strdup(temp);
		}
	| decimal {
			char* temp[5]; 
			sprintf(temp, "%f\0", $1);
			$$ = strdup(temp);
		}
	| identifier {
			bool ret1 = FindVariableSymbolTable($1); 
			bool ret2 = IsVariableInitialized($1);
			bool ret3 = IsVariableInteger($1);	
			if(ret1 == true && ret2 == true && ret3 == true){
				$$ = $1;
			}
			else{
				if(!ret1){
					yyerror("Variable not declared!");
				}
				else if(!ret2){
					yyerror("Variable not initialized!");
				}
				else if(!ret3){
					yyerror("Variable type Mismatch!");
				}
				exit(1);
			}
		}
	| LRP ADDEXPRESSION RRP {$$ = ($2);}
	;
%%
#include "lex.yy.c"
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsed Correctly!\n");
	else
		printf("\nParsing Failed\n");
	fclose(yyin);
	PrintSymbolTable();
	return 0;
}

void yyerror (char *s) {
	printf("\nLine = %d : Masla = %s\n", (yylineno), s);
}
