/*
Name:Agnes Mukii
Registration no:29254
date:2nd october 2025
Description: A water bills program program
*/#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user to enter water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on consumption rules
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Display total bill with two decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}