/*
Name : Bonface Mutinda
RegNo : CT101/G/26531/25
WEEK 7 ASSIGNMENT [Q1]
DESCRIPTION :
Program that lets the librarian enter book titles and stores them
in a text file named "borrowed_books.txt" without erasing previous records.
Displays confirmation once each title is saved.
*/

#include <stdio.h>

int main(void)
{
    FILE *file;
    char title[100];
    char choice;

    file = fopen("borrowed_books.txt", "a");  // open for appending
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        fflush(stdin);
        fgets(title, sizeof(title), stdin);

        fprintf(file, "%s", title);
        printf("Book title saved successfully.\n");

        printf("Add another? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // consume newline
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll records stored in borrowed_books.txt\n");

    return 0;
}