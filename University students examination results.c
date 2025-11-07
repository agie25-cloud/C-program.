/*
Name:Agnes Mukii
Reg no:CT101/G/29254/25
Date:5th November 2025
Description:University students examination results
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;
    char choice;

    // --- Writing section ---
    file = fopen("results.dat", "ab");  // open for appending in binary mode
    if (file == NULL) {
        printf("Error: Could not open results.dat for writing\n");
        return 1;
    }

    printf("Enter number of students to record: ");
    scanf("%d", &n);
    getchar(); // clear newline

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter registration number: ");
        fgets(s.regNo, sizeof(s.regNo), stdin);

        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);
        getchar(); // clear newline

        fwrite(&s, sizeof(struct Student), 1, file);
    }

    fclose(file);
    printf("\nRecords saved successfully to results.dat!\n\n");

    // --- Reading section ---
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat for reading\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("----------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s", s.name);
        printf("Registration No: %s", s.regNo);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("----------------------------------\n");
    }

    fclose(file);
    return 0;
}