/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :progto conveertemperature in Fahrenheit to Celsius 
*/
#include <stdio.h>
//main function 
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    //the user to enter temperature value in Fahrenheit 
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    //conversion of fahrto Celsius 
float celsius = convertToCelsius(f);
    printf("Temperature in Celsius = %.2f°C\n", celsius);
    
    return 0;
}