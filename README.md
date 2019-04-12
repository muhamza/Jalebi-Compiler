# Jalebi-Compiler
A compiler for Roman Urdu programming language, namely Jalebi. 

To run the lex files follow the steps:
1. Download the files.  
2. Write these commands on your terminal.    
  ~$ lex tokenizer.l   
  ~$ yacc -d -v parser.y  
  ~$ gcc lex.yy.c y.tab.c -o compiler  
  ~$ ./compiler  
