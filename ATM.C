#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int pin, balance = 5000, withdrawnVar, choice, strMatch;
	char balanceCheck[10];
	clrscr();
	printf("Welcome to SBI Banking\n");
	printf("Enter your pin to proceed with your transaction");
	scanf("%d", &pin);
	if(pin==1234){
		printf("1. Withdraw\n 2. Deposit\n 3. Balance Inquiry\n 4. pin Change");
		printf("\nPlease choose one option from the above");
		scanf("%d", &choice);
		switch(choice)
			case 1:
				//printf("You have choosen Withdraw option");
				  printf("Enter the amount to withdraw\n");
				  scanf("%d", &withdrawnVar);
				  balance = balance - withdrawnVar;
				  printf("You want to display the remaining balance\n Choosen one option from below: Yes or No");
				  scanf("%s", &balanceCheck);
				  strMatch=strcmp(balanceCheck, "Yes");
				  if(strMatch==0){
					printf("Your remaining balance is: %d", balance);
				  }
				  printf("\nThanks for Using SBI ATM\n Visit Again!!!");

	}
	else{
		printf("Please check with your password and reenter");
	}
	getch();
}