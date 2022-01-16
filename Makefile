# -*- MakeFile -*-

#target: dependencies
#	action


all: main

main: halopesa.o menu.o
	gcc halopesa.o menu.o -o main

halopesa.o: halopesa.c mainmenu.h
	gcc -c halopesa.c

menu.o: menu.c
	gcc -c menu.c
