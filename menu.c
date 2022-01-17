#include <stdio.h> 

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
			tumapesa();
	}
}
