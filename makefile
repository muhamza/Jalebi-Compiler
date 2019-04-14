compiler: y.tab.c lex.yy.c
	gcc y.tab.c -ll -w -o compiler

lex.yy.c: y.tab.c compiler.l
	lex compiler.l

y.tab.c: compiler.y
	yacc compiler.y
