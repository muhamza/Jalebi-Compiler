%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int yylineno;
%}

%token markazi se chalo jabtak
%token agar agarwarna warna likho
%token hindsa jumla booliyayi aasharia
%token khaali sahih ghalat 
%token stringliteral identifier
%token decimal integer
%token comma semicolon	

%start START
%left LRP RRP LCP RCP
%right INO DCO
%left MUL DIV MOD PLS MIS
%left LT LTE GT GTE IEQ NEQ 
%left NOT AND OR
%right EA AA SA MA DA 

%%
START: markazi LRP RRP COMPOUNDSTATEMENT
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
COMPOUNDSTATEMENT: LCP MULTIDECLARATION  MULTISTATEMENT RCP 
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
	| NUMBERTYPE identifier EA integer semicolon 
	| STRINGTYPE identifier EA stringliteral semicolon 
	| FLOATTYPE identifier EA decimal semicolon 
	| BOOLTYPE identifier EA BOOLOPTIONS semicolon
	; 
STATEMENT: EXPRESSIONSTATEMENT
	| SELECTIONSTATEMENT
	| ITERATIONSTATEMENT
	| PRINTSTATEMENT
	;
PRINTSTATEMENT: likho LRP stringliteral RRP semicolon
	| likho LRP stringliteral comma identifier RRP semicolon
	| likho LRP identifier RRP semicolon
	;
SELECTIONSTATEMENT: IFSTATEMENT ELSEIFSTATEMENT ELSESTATEMENT
	;
IFSTATEMENT: agar LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT
	;
ELSEIFSTATEMENT: agarwarna LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT 
	| 
	;
ELSESTATEMENT: warna COMPOUNDSTATEMENT 
	| 
	;
ITERATIONSTATEMENT: jabtak LRP LOGICALEXPRESSION RRP COMPOUNDSTATEMENT
        | chalo LRP integer se integer RRP COMPOUNDSTATEMENT
	;
LOGICALEXPRESSION: LRP RELATIONALEXPRESSION RRP LOGICALOPERATORS LRP RELATIONALEXPRESSION RRP
 	| NOTOPERATOR LRP RELATIONALEXPRESSION RRP 
	| RELATIONALEXPRESSION
	;
RELATIONALEXPRESSION: identifier RELATIONALOPERATORS integer
	| integer RELATIONALOPERATORS integer
	| BOOLOPTIONS
	;
/* Note: 	
	1) the first two rules of EXPRESSIONSTATEMENT will cater all assignment operators except for =;
	2) the last rule will cater assignment (=) 
*/
EXPRESSIONSTATEMENT: identifier ASSIGNMENTOPERATORS identifier semicolon
	| identifier ASSIGNMENTOPERATORS NUMBERS semicolon
	| identifier INCDECOPERATORS semicolon
	| INCDECOPERATORS identifier semicolon
	| identifier EA ADDEXPRESSION semicolon
	;
ADDEXPRESSION: ADDEXPRESSION PLS MULTIPLYEXPRESSION 
	| ADDEXPRESSION MIS MULTIPLYEXPRESSION 
	| MULTIPLYEXPRESSION
	;
MULTIPLYEXPRESSION: MULTIPLYEXPRESSION MUL TERMINALEXPRESSION 
	| MULTIPLYEXPRESSION DIV TERMINALEXPRESSION 
	| TERMINALEXPRESSION
	;
TERMINALEXPRESSION: NUMBERS 
	| identifier 
	| LRP ADDEXPRESSION RRP
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
	PrintValueTable();
	PrintHashTable();
	return 0;
}
/*
int main(void){
	PrintValueTable();
	return yyparse();
}*/

void yyerror (char *s) {
	printf("\nLine = %d : Masla = %s\n", (yylineno), s);
}
