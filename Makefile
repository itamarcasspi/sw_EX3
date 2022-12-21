

all: isort txtfind

isort: third.o mainsort.o
	gcc mainsort.o third.o -o isort

txtfind: third.o maintxtfind.o
	gcc maintxtfind.o third.o -o txtfind

third.o: third.c third.h
	gcc -Wall -g third.c -c

mainsort.o: mainsort.c third.h
	gcc -Wall -g -c mainsort.c 

txtfind.o: maintxtfind.c third.h
	gcc -Wall -g -c maintxtfind.c

.PHONY: clean all

clean: 
	rm -f *.o *.a *.so isort txtfind
