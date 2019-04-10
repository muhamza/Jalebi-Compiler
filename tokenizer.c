#include <stdio.h>
#include "tokenizer.h"

extern int yylex();
extern int yylineno;
extern char* yytext; 

char* name[] = {NULL,"markazi","chalo","jabtak","agar","warna","agarwarna","likho","hindsa","chindsa","bhindsa","jumla","booliyayi","aasharia","khaali","sahih","ghalat","stringliteral","identifier","decimal","integer","EA","AA","SA","MA","DA","GT","LT","GTE","LTE","IEQ","NEQ","INO","DCO","PLS","MIS","MUL","DIV","MOD","AND","OR","NOT","se","LRP","RRP","LCP","RCP", "comma","semicolon"};

int main(void){
	int ntoken;
	ntoken = yylex();
	while(ntoken){
		printf("%d  %s\n", ntoken, yytext);
		ntoken = yylex();
	}
	return 0;
}

