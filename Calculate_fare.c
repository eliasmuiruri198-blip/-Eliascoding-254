/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :Program to calculate fare per distance traveled 
*/
#include <stdio.h>

int calculateFare(int distance) {
    return distance * 50;
}

int main() {
    int km;
    //prompt the user to enter distance traveled in kilometers 
    printf("Enter distance traveled (in km): ");
    scanf("%d", &km);
    //total fare calculation in Ksh
    int fare = calculateFare(km);
    printf("Total fare = KSh. %d\n", fare);
    
    return 0;
}