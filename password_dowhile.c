/*
Name:Muiruri Elias
Reg No: CT100/G/26169/25
Description:Program to set password using do while loop
*/
#include<stdio.h>
//main function

int main(){
int correct_password =1234;
	
	int input;//start
	do{
	printf("Enter your password \n");  
	scanf("%i",&input);

	}while(input !=correct_password);//!=not equal to
	
	printf("The above is a correct password \n");
	return 0;
}