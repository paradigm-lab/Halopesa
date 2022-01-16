# -*- MakeFile -*-

#target: dependencies
#	action


main: halopesa.o menu.o
	gcc halopesa.o menu.o -o main

halopesa.o: halopesa.c
	gcc -c halopesa.c

menu.o: menu.c
	gcc -c menu.c
