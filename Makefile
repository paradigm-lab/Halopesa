# -*- MakeFile -*-

#target: dependencies
#	action


all: main

main: halopesa.o menu.o tumapesa.o
	gcc halopesa.o menu.o tumapesa.o -o main

halopesa.o: halopesa.c mainmenu.h
	gcc -c halopesa.c

menu.o: menu.c mainmenu.h
	gcc -c menu.c

tumapesa.o: tumapesa.c
	gcc -c tumapesa.c

clean:
	rm -f *.o main
