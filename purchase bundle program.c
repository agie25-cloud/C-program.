/*
Name:Agnes Mukii
Registration no:29254
date:2nd october 2025
Description: A bundle purchase program
*/
#include <stdio.h>
   
int main() {
    int choice;

    // Display the menu
    printf("Option\tBundle\tCost (KES)\n");
    printf("1\t100 MB\t50\n");
    printf("2\t500 MB\t200\n");
    printf("3\t1 GB\t350\n");
    printf("4\t2 GB\t600\n");

    // Ask the user for their choice
    printf("\nEnter your choice (1–4): ");
    scanf("%d", &choice);

    // Use switch to display the selected bundle and cost
    switch (choice) {
        case 1:
            printf("You selected 100 MB for KES 50.\n");
            break;
        case 2:
            printf("You selected 500 MB for KES 200.\n");
            break;
        case 3:
            printf("You selected 1 GB for KES 350.\n");
            break;
        case 4:
            printf("You selected 2 GB for KES 600.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}