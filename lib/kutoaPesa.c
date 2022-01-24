#include <stdio.h>
#include "halopesa.h"


void kwaWakala();
void umojaAtm();
void selcomPos();
void wakalaWaVisa();

void kutoaPesa() {

	char userInput;

	printf("1. Kwa wakala \n");
	printf("2. UMOJA ATM \n");
	printf("3. Wakala wa visa \n");
	printf("4. Selcom POS \n");
	printf("#. Nyuma \n");
	scanf("%c", &userInput);

	switch (userInput) {
	
		case '1':	
			kwaWakala();
			break;
		case '2':
			umojaAtm();
			break;
		case '3':
			wakalaWaVisa();
			break;
		case '4':
			selcomPos();
			break;
		case '#':
			nyuma();
			break;
		default:
			printf("Jaribu tena");
			break;	
	}
}




void kwaWakala() {
	printf("Kwa wakala");
}


void wakalaWaVisa() {
	printf("Kwa wakala Wa visa");
}

void umojaAtm() {
	printf("Wakala Wa Visa");
}

void selcomPos() {
	printf("Seclom POS");
}
