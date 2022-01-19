#include <stdio.h> 
#include "mainmenu.h"

void mainmenu() {
	printf("\t \t \t \tWelcome to Halopesa \n");

	printf("1. Tuma pesa \n");
	printf("2. Kutoa Pesa \n");
	printf("3. Vocha & Kifurushi \n");
	printf("4. Lipia Bili \n");
	printf("5. Lipia Bidhaa \n");
	printf("6. PLAY & WIN \n");
	printf("7. HaloYako \n");
	printf("8. Tuma Bank \n");
	printf("9. Akaunti Yangu \n");

	int input;
	scanf("%d", &input);

	switch(input) {
		case 1:
			tumaPesa();
			break;
		case 2:
			kutoaPesa();
			break;
		case 3:
			vochaKifurushi();
			break;
		case 4:
			lipiaBili();
			break;
		case 5:
			lipiaBidhaa();
			break;
		case 6:
			playWin();
			break;
		case 7:
			haloYako();
			break;
		case 8:
			tumaBank();
			break;
		case 9:
			akauntiYangu();
			break;
		default:
			printf("Jaribu tena");
			break;
	}
}
