/*
Name : Bonface Mutinda
RegNo : CT101/G/26531/25
WEEK 7 ASSIGNMENT [Q2]
DESCRIPTION :
Program that defines a structure for student results,
reads records from a binary file "results.dat",
and displays each student’s name and total marks.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main(void)
{
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb");  // read binary
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("STUDENT \n");
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", s.name);
        printf("RegNo: %s\n", s.regNo);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(file);
    return 0;
}