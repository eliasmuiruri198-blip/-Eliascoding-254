//C program
/*
Name: Muiruri Elias 
Reg: CT100/G/26169/25
Description: To prompt the user to enter the bank loan qualifications
*/
#include <stdio.h>pre-processor directives 
//main function 
int main() {
    int age;
    int income;
//prompt the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);
//prompt the user to enter annual income
    printf("Enter your annual income in Sh: ");
    scanf("%f", &income);
//Expected results
    if (age >= 21) ;
    if (income >= 21000) ;
        printf("Congratulations, you qualify for a loan.\n");
        printf("Sorry, you do not qualify for a loan at this time.\n");

    return 0;
}
