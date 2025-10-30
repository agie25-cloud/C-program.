/*
Name:Agnes Mukii
Reg No:CT101/G/29254/25

Description:1D array-weekly revenue tracker

*/

#include <stdio.h>

int main() {
    float revenue[7] = {4500, 5200, 4800, 6000, 5500, 5000, 5300};
    float total = 0, average;
    int i;

    printf("Daily Revenues:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: %.f\n", i + 1, revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal Weekly Revenue = %.f\n", total);
    printf("Average Daily Revenue = %.f\n", average);

    return 0;
}