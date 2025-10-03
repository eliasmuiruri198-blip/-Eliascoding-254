//C program
/*
Name: Muiruri Elias 
Reg: CT100/G/26169/25
Description: to prompt the student to compute for volume and surface area 
of a cylinder
*/
#include <stdio.h>pre-processor directives
#define PI 3.1416

int main() {
    float radius, height, volume, surfaceArea;

    // prompt the student to enter radius
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);
    //prompt the student to enter height
    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // display results
    printf("Volume of the cylinder = %.1fm³\n", volume);
    printf("Surface Area of the cylinder = %.1fm²\n", surfaceArea);

    return 0;
}
