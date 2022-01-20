#include <stdio.h>


// Function prototype
void kwendaHalopesa();
void kwendaMitandaoMingine();
void kamaVocha();
void nyuma();


void tumaPesa() {

	int userInput;

	printf("1. Kwenda Halopesa \n");
	printf("2. Kwenda Mitandao Mingine \n");
	printf("3. Kama Vocha \n");
	printf("# Nyuma \n");

	scanf("%s", &userInput);

	switch (userInput) {
		case "1":
			kwendaHalopesa();
			break;
		case "2":
			kwendaMitandaoMingine();
			break;
		case "3":
			kamaVocha();
			break;
		case "#":
			nyuma();
			break;
		default:
			printf("Jaribu tena");
	}

}

void kwendaHalopesa() {
	printf("Kwenda Halopesa");
}

void kwendaMitandaoMingine() {
	printf("Kwenda  Mitandao Mingine");
}

void kamaVocha() {
	printf("Kama Vocha");
}

void nyuma() {
	printf("Nyuma");
}
