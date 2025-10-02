/*
Name:MuiElias 
Reg no:CT100/G/26169/25
Description:Program to check exam eligibility for a student
*/
#include<stdio.h>//scanf(),printf()

//main function
int main() {
int attendance;
float marks;

//prompt the student to enter attendance
printf("Enter attendance, \t");
scanf("%d",&attendance);

//prompt the student to enter marks
printf("Enter marks \t");
scanf("%f",& marks);

if (attendance >=75 && marks >=40){
printf("You are eligible for final exams");
}
else{
printf("You are not eligible for final exams");
}

return 0;
}