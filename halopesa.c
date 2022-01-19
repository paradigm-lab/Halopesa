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

	struct user mteja;
	mainmenu(); 
	return 0;
}
