%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
int symboltable[50];
int GetSymbolValue(char symbol);
void UpdateSymbolValue(char symbol, int value);
%}

%token markazi se chalo jabtak
%token agar agarwarna warna likho
%token hindsa chindsa bhindsa jumla booliyayi aasharia
%token khaali sahih ghalat 
%token stringliteral identifier
%token decimal integer
%token comma semicolon	

%left LRP RRP LCP RCP
%right INO DCO
%left MUL DIV MOD PLS MIS
%left LT LTE GT GTE IEQ NEQ 
%left NOT AND OR
%right EA AA SA MA DA 

%%
start: markazi LRP RRP <compound-statement>
<compound-statement>: LCP <multi-declaration>  <multi-statement> RCP
<multi-declaration>: <declaration> <multi-declaration> | <declaration>
<multi-statement>: <statement> <multi-statement> | <statement>
<declaration>: <number-type> identifier semicolon 
	| <string-type> identifier semicolon 
	| <float-type> identifier semicolon 
	| <number-type> identifier EA integer semicolon 
	| <string-type> identifier EA stringliteral semicolon 
	| <float-type> identifier EA decimal semicolon 
	| <bool-type> identifier EA <bool-options> semicolon 
<statement>: <expression-statement>
	| <selection-statement>
	| <iteration-statement>
	| <print-statement>
<statement>: <expression-statement>
	| <selection-statement>
	| <iteration-statement>
	| <print-statement>
<print-statement>: likho <LRP> stringliteral <RRP> 
	| likho <LRP> stringliteral comma identifier <RRP> 
<selection-statement>: <if-statement> <else-if-statement> <else-statement>
<if-statement>: agar LRP <logical-expression> RRP <compound-statement>
<else-if-statement>: agarwarna LRP <logical-expression> RRP <compound-statement> 
	| ε
<else-statement>: warna <compund-statement> 
	| ε
<iteration-statement>: jabtak LRP <logical-expression> RRP <compound-statement>
                        | chalo LRP integer se integer RRP <compound-statement>
<logical-expression>: LRP <relational-expression> RRP <logical-operators>  LRP <relational 	expression> RRP
 	| NOT LRP <relational-expression> RRP 
	| <relational-expression>
<relational-expression>: identifier <relational-operator> integer
	| integer <relational-operator> integer
	| <bool-options>
<expression-statement>: identifier <assignment-operator> identifier semicolon
	| identifier <assignment-operator> <numbers> semicolon
	| identifier <inc-dec-operator> semicolon
	| <inc-dec-operator> identifier semicolon
	| identifier <assignment-operator><add-expression> semicolon
<add-expression>: <add-expression> PLS <multiply-expression> 
	| <add-expression> MIS <multiply-expression> 
	| <multiply-expression> semicolon
<multiply-expression>: <multiply-expression> MUL <terminal-expression> 
	| <multiply-expression> DIV <terminal-expression> 
	| <terminal-expression> semicolon
<terminal-expression>: <numbers> 
	| identifier 
	| LRP <add-expression> RRP semicolon
