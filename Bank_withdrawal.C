/*
Name:Muiruri Elias
Reg no: CT100/G/26169/25
Description:Program to customer to from A/C using while loop
Date:03rd October 2025
*/
#include<stdio.h>

//main function
int main(){
	int amount;
	int balance=5000;//start
	printf("Dear customer your current balance is Ksh.%d \n",balance);
	
	//prompt the user to enter amount to withdraw
	while( balance>= 0){//stop
	printf("Enter amount to withdraw \n Ksh.");
	scanf("%d",&amount);
	
	//step	
	balance-=amount;
	
	//display the new bank A/C balance
	printf("New balance=ksh.%d \n",balance);
	}
	//if the customer tries to withdraw more than what is in the account
	printf("Insufficient Balance in your A/C \n");
	
	return 0;
}