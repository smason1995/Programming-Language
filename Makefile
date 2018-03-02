sloth: lang.o
	gcc -o sloth pars.tab.c lang.o

lang.o: lang.lex.c
	gcc -o lang.o lang.lex.c

lang.lex.c: lang.l
	flex -o lang.lex.c lang.l

pars.tab.c:
	bison -d pars.y

clean:
	rm sloth lang.lex.c lang.o pars.tab.*
