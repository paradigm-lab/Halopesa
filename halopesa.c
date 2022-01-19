#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mainmenu.h"


/*
 * Using the struct for the user
 */
struct user {
	char phone[50];
	char password[50];
	float balance;
};

int main() {

	// The instance of the struct
	struct user mteja;

	// Defining a file pointer
	FILE *fp;

	// Defining the file name 
	char filename[10], phone[10], pword[50];

	// Declaring the opt variable to check for the user option
	int opt;

	printf("\t \t \tWelcome to Halopesa \n");
	printf("1. Register an account \n");
	printf("2. Login to an account \n \n");

	printf("Your choice: \t");
	scanf("%d", &opt);
	
	// Checking for the user input 
	if (opt == 1) {
		system("clear");
		printf("Ingiza number ya simu: \t");
		scanf("%s", mteja.phone);
		printf("Ingiza number la siri: \t");
		scanf("%s", mteja.password);
		
		// Assigning the balance as 0 to the user account
		mteja.balance = 0;

		// using the copy function to copy the phone number to be the file name
		strcpy(filename, mteja.phone);

		/*
		 * Opening the file and concatenate the phone number with the file extension
		 * Open the file into write mode
		 * Using the if else condtion to check for the existence of the file if is null
		 */
		fp = fopen(strcat(filename, ".no"), "w");
		fwrite(&mteja, sizeof(struct user), 1, fp);
		if (fwrite != 0) {
			printf("\n \n Account succesfully registered");
		} else {
			printf("\n \n Something went wrong please try again");
		}
		fclose(fp);
	}

	if (opt == 2) {
		system("clear");
		printf("\n Ingiza number ya simu: \t");
		scanf("%s", phone);
		printf("Password: \t");
		scanf("%s", pword);

		strcpy(filename, phone);
		fp = fopen(strcat(filename, ".no"), "r");
		fread(&mteja, sizeof(struct user), 1, fp);
		fclosa(fp);

		if(!strcmp(pword, mteja.password)) {
			printf("\n Password matched");
		} else {
			printf("\n Invalid password");
		}
	}

	
	mainmenu(); 
	return 0;
}
