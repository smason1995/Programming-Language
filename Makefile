sloth: lang.o
	gcc -o sloth pars.tab.c lang.o

lang.o: lang.lex.c
<<<<<<< HEAD
	gcc -c lang.lex.c -o lang.o

lang.lex.c: lang.l pars.tab.c
=======
	gcc -o lang.o lang.lex.c

lang.lex.c: lang.l
>>>>>>> cadac23c9847b5acd016b5bc47a8a4ed05210f99
	flex -o lang.lex.c lang.l

pars.tab.c:
	bison -d pars.y

clean:
	rm sloth lang.lex.c lang.o pars.tab.*
