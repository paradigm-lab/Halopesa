# -*- MakeFile -*-

#target: dependencies
#	action


main: halopesa.o menu.o
	gcc -o halopesa.o menu.o main

halopesa.o: halopesa.c
	gcc -c halopesa.c

menu.o: menu.c
	gcc -c menu.c
