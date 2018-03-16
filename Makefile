sloth: lang.o
	gcc -o sloth pars.tab.c lang.o

lang.o: lang.lex.c
	gcc -c lang.lex.c -o lang.o

lang.lex.c: lang.l pars.tab.c
	flex -o lang.lex.c lang.l

pars.tab.c:
	bison -d pars.y

clean:
	rm sloth lang.lex.c lang.o pars.tab.*
