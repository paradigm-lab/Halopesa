# -*- MakeFile -*-

#target: dependencies
#	action

CC=gcc
OPT=-O0
CFLAGS=-c

all: main

main: halopesa.o menu.o tumapesa.o
	$(CC) halopesa.o menu.o tumapesa.o -o main

halopesa.o: halopesa.c mainmenu.h
	$(CC) $(CFLAGS) halopesa.c

menu.o: menu.c mainmenu.h
	$(CC) $(CFLAGS) menu.c

tumapesa.o: tumapesa.c
	$(CC) $(CFLAGS) tumapesa.c

clean:
	rm -f *.o main
