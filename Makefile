# -*- MakeFile -*-

#target: dependencies
#	action

CC=gcc
OPT=-O0
CFLAGS=-c


CFILES=halopesa.c menu.c tumapesa.c
OBJECTS=halopesa.o menu.o tumapesa.o

BINARY=bin

all: $(BINARY)


$(BINARY): $(OBJECTS)
	$(CC) halopesa.o menu.o tumapesa.o -o bin

halopesa.o: halopesa.c mainmenu.h
	$(CC) $(CFLAGS) halopesa.c

menu.o: menu.c mainmenu.h
	$(CC) $(CFLAGS) menu.c

tumapesa.o: tumapesa.c
	$(CC) $(CFLAGS) tumapesa.c

clean:
	rm -rf $(BINARY) *.o
