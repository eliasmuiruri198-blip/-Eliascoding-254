/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :Program to Calculate electric bill
*/
#include <stdio.h>

int calculateElectricBill(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    //prompt the user to enter units
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    //total bill calculation
    int totalBill = calculateElectricBill(units);
    printf("Total bill = KSh. %d\n", totalBill);
    
    return 0;
}
