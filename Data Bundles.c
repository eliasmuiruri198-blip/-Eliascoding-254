/*
Name:MuiElias 
Reg no:CT100/G/26169/25
Description:Program for customer data bundles selection
*/
#include<stdio.h>//scanf(),printf()

//main function
int main() {
int choice;

//display bundle menu
printf ("select your bundle \n");
printf ("1. 100MB @ 50KES \n");
printf ("2. 500MB @ 200KES \n");
printf ("3. 1GB @ 350KES \n");
printf ("4. 2GB @ 600KES \n");

//prompt the customer to enter choice
printf("Enter your choice(1-4)=");
scanf("%d",&choice);

//use of switch to display the bundle selected and it's cost
if (choice== 1) {
printf("You have selected 100MB for 50KES\n");
}
else if (choice== 2 ) {
printf("You have selected 500MB for 200KES\n");
}
else if (choice== 3) {
printf("You have selected 1GB for 350KES\n");
}
else if (choice== 4) {
printf("You have selected 2GB for 600KES\n");
}
else {
printf("invalid choice \n");
}
return 0;
}