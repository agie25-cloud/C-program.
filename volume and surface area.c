//Simple c program (Agnes Mukii)
/*
Name: Agnes Mukii
Reg no:29254
Date:24/9/2025
Description:finding Volume and surface area of a cylinder program
V=πr×r×h
S.A=(2πr×r)+(2πrh)
*/
#include <stdio.h>
#define PI 3.14159

    int main() {
        float radius, height, volume, surfaceArea;

        // Prompt user to enter radius 
        printf("Enter the radius of the cylinder:");
        scanf("%f",&radius);
//prompt user to enter height 
printf("Enter the height of the cylinder:");
scanf("%f",& height);
        // Calculate volume and surface area
        volume = PI * radius * radius * height;
        surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

        // Display output 
        printf("Volume of the cylinder = %.2f\n", volume);
        printf("Surface area of the cylinder = %.2f\n", surfaceArea);

        return 0;
    }