#include <stdio.h>
#include "mainmenu.h"

int phonenumber[10];

int main() {

	int size;

	printf("Enter the size of the number: ");
	scanf("%d", &size);

	/*
	 * Bound checking of the array 
	 */
	if (size > 10) {
		printf("Size out of bound");
	}
	else {

		if (phonenumber) {
			printf("Enter phone number: ");
			for (int i = 0; i < size; i++) {
				scanf("%d",phonenumber[i]);
			}
			printf("\n");
			printf("This is you phone number: ");
			for (int i = 0; i < size; i++) {
				printf("%d", phonenumber[i]);
			}

			printf("\n \n");
		}
	}

	mainmenu();
}
