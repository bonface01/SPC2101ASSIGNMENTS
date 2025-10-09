/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 4 ASSIGNMENT [Q2]
DESCRIPTION :
Program that repeatedly prompts the user to enter a numeric password (1234).
If the correct password is entered, the program displays "Access Granted".
If an incorrect password is entered, it displays "Access Denied" and prompts again
until the correct password is entered using a do-while loop.
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234) {
            printf("Access Granted\n");
        } else {
            printf("Access Denied! Try again.\n\n");
        }

    } while (password != 1234);

    return 0;
}