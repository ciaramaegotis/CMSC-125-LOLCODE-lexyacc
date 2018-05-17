make: lexer.l parser.y
     lex lexer.l
     yacc -d parser.y
     cc lex.yy.c y.tab.c -ll -ly
     a.out practice.lol
