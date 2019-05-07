%{
#include "y.tab.h"
#include "symbolTable.c"
#include <string.h>
char tempDataType[50] = "";
char tempVariable[50] = "";
int lineType = -1;
int lineVar = -1;
int lineVal = -1;
%}

%option nounput yylineno

%%
markazi	return markazi;
chalo return chalo;
se return se;
jabtak return jabtak;
agar return agar;
warna return warna;
agarwarna  return agarwarna;
likho return likho;
hindsa {strcpy(tempDataType, "hindsa"); lineType = yylineno; return hindsa;}
jumla {strcpy(tempDataType, "jumla"); lineType = yylineno; return jumla;}
booliyayi {strcpy(tempDataType, "booliyayi"); lineType = yylineno; return booliyayi;}
aasharia {strcpy(tempDataType, "aasharia"); lineType = yylineno; return aasharia;}
khaali return khaali;
sahih {
		lineVal = yylineno; 
		if(lineType == lineVal && lineVal == lineVar && lineVal >= 0){
			InitializeVariable(tempVariable);
		}
		yylval.sVal = strdup(yytext); 
		return sahih;
	}
ghalat {
		lineVal = yylineno; 
		if(lineType == lineVal && lineVal == lineVar && lineVal >= 0){
			InitializeVariable(tempVariable);
		}		
		yylval.sVal = strdup(yytext); 
		return ghalat;
	}
\"(\\.|[^"\\])*\" {
		lineVal = yylineno; 
		if(lineType == lineVal && lineVal == lineVar && lineVal >= 0){
			InitializeVariable(tempVariable);
		} 
		yylval.sVal = strdup(yytext);
		return stringliteral;
	}
[a-zA-Z][_a-zA-Z0-9]* {
		if(strcmp(tempDataType, "none") != 0){
			strcpy(tempVariable, yytext); 
			lineVar = yylineno; 
			InsertSymbolTable(yytext, tempDataType, yylineno, scopeOut);
		} 
		yylval.sVal = strdup(yytext); 
		return identifier;
	}
([0-9]+\.[0-9]+) {
		lineVal = yylineno; 
		if(lineType == lineVal && lineVal == lineVar && lineVal >= 0){
			InitializeVariable(tempVariable);
		}  
		yylval.fVal = atof(yytext); 
		return decimal;
	}
([0-9]+) {
		lineVal = yylineno; 
		if(lineType == lineVal && lineVal == lineVar && lineVal >= 0){
			InitializeVariable(tempVariable);
		} 
		yylval.iVal = atoi(yytext); 
		return integer;
	}
"=" return EA;
"+=" return AA;
"-=" return SA;
"*=" return MA;
"/=" return DA;
">" {yylval.sVal = strdup(yytext); return GT;}
"<" {yylval.sVal = strdup(yytext); return LT;}
">=" {yylval.sVal = strdup(yytext); return GTE;}
"<=" {yylval.sVal = strdup(yytext); return LTE;}
"==" {yylval.sVal = strdup(yytext); return IEQ;}
"!=" {yylval.sVal = strdup(yytext); return NEQ;}
"++" return INO;
"--" return DCO;
"+" return PLS;
"-" return MIS;
"*" return MUL;
"/" return DIV;
"%" return MOD;
"&&" {yylval.sVal = strdup(yytext); return AND;}
"|" {yylval.sVal = strdup(yytext); return OR;}
"!" {yylval.sVal = strdup(yytext); return NOT;}
"(" return LRP;
")" return RRP;
"{" {
		scopeOut = count++; 
		PushStack(scopeOut); 
		InitializeCloseScope(scopeOut); 
		AddScopeList(scopeOut); 
		return LCP;
	}
"}" {
		CloseScope(HeadStack()); 
		scopeOut = PopStack(); 
		return RCP;
	}
"," return comma;
";" {
		strcpy(tempDataType, "none"); 
		return semicolon;
	}
[ \t\n]+ ;
%%

int yywrap(void){
	return 1;
} 

