# -*- MakeFile -*-

#target: dependencies
#	action

CC=gcc
INCDIRS=-I.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT)


CFILES=halopesa.c menu.c tumapesa.c
OBJECTS=halopesa.o menu.o tumapesa.o
HEADERS=mainmenu.h 

BINARY=bin

all: $(BINARY)


$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^


# Regular Expression where % is a wildward
%.o:%.c %.h 
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)
