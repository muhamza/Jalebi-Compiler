%{
#include "tokenizer.h"

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
hindsa return hindsa;
chindsa return chindsa;
bhindsa return bhindsa;
jumla return jumla;
harf return harf;
aasharia return aasharia;
khaali return  khaali;
sahih return sahih;
ghalat return ghalat;
\"(\\.|[^"\\])*\" return stringliteral;
^[a-zA-Z][_a-zA-Z0-9]* return identifier;
([0-9]+\.[0-9]+) return decimal;
([1-9][0-9]*) return integer;
"=" return EA;
"+=" return AA;
"-=" return SA;
"*=" return MA;
"/=" return DA;
">" return GT;
"<" return LT;
">=" return GTE;
"<=" return LTE;
"==" return IEQ;
"!=" return NEQ;
"++" return INO;
"--" return DCO;
"+" return PLS;
"-" return MIS;
"*" return MUL;
"/" return DIV;
"%" return MOD;
"&" return AND;
"|" return OR;
"!" return NOT;
"(" return LRP;
")" return RRP;
"{" return LCP;
"}" return RCP;
";" return semicolon;
[ \t\n]+ ;
. return yytext[0];
%%

int yywrap(void){
	return 1;
} 

