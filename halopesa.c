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
	// Declaring the char continue variable 
	char cont = 'y';

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

	// Checking for the user input 
	printf("Your choice: \t");
	scanf("%d", &opt);

	/*
	 * Checking for the first input from the user
	 * which is to register the user 
	 */	
	if (opt == 1) {
		// Using the system function to clear out the screen
		system("clear");
	
		/*
		 *  Getting input from the user for the phone number and password
		 */	
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

	/*
	 *  Checking the second input from the user
	 *  Which is the login option
	 */

	if (opt == 2) {

		// Using the system function to clear out the screen
		system("clear");

		/*
		 * Asking the user for the input the phone number and the password 
		 */
		printf("\n Ingiza number ya simu: \t");
		scanf("%s", phone);
		printf("Ingiza neno la siri: \t");
		scanf("%s", pword);

		strcpy(filename, phone);

		// Opening the file into read mode but using the strcat function to read the file
		fp = fopen(strcat(filename, ".no"), "r");

		/*
		 * Checking if the file is null 
		 */
		if (fp == NULL) {
			printf("\n Namba yako ya simu haija sajiliwa"); 
		} else {	

			// Opening the file in reading mode 
			fread(&mteja, sizeof(struct user), 1, fp);

			// Closing the file
			fclose(fp);

			// Comparing the user input password and the password in the file
			if(!strcmp(pword, mteja.password)) {
					system("clear");
					mainmenu();
			} 
			else {
				printf("\n Invalid password");
			}
		}
	}
	
	return 0;
}
