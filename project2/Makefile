project2: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -o project2.out -lm

lex.yy.c: y.tab.c lex.lex
	lex lex.lex

y.tab.c: yacc.yacc
	yacc -d yacc.yacc

clean: 
	rm -f lex.yy.c y.tab.c y.tab.h project2

