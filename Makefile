prog: main.o UrlLib.o
	gcc -g -o crono main.o UrlLib.o

main.o: main.c UrlLib.h
	gcc -c main.c

UrlLib.o: UrlLib.c UrlLib.h
	gcc -c UrlLib.c

