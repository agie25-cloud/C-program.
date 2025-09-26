/*
Name:Agnes Mukii
Registration no:29254
date:26th September 2025
Description: A compound interest program
*/
#include <stdio.h>
#include <math.h>

int main () {
    //Variable declaration
   float rate , Time , principle , interest , amount;
   //take values from the user
   printf("Enter the Principle Amount:");
   scanf("%f", &principle);
   
   printf("\nEnter Rate as a percentage:");
   scanf("%f", &rate);
   
   printf("\nEnter Time Duration:");
   scanf("%f", &Time);
   
   //conditions for values
   if(principle <=0 || rate <=0 || Time <=0) {printf("\n ERROR! KINDLY ENTER POSITIVE VALUE INPUTS");
       return 1;
   }
   
   //calculation formulae for compound interest
   amount = principle * pow((1+ rate/100),Time);
   interest = amount - principle;
   
   //display calculated compound interest
   printf("\n The compound interest is = $%.3f", interest);
   printf("\n The total amount after compound interest is $%.3f", amount);
    return 0;
}
    
    