/*
Name : Bonface Mutinda
RegNo : CT101/G/26531/25
WEEK 7 ASSIGNMENT [Q3]
DESCRIPTION :
Program that reads transaction amounts from "sales.txt",
calculates the total daily sales, and displays the result.
Ensures the file is properly closed after reading.
*/

#include <stdio.h>

int main(void)
{
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt!\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total Sales for the Day: %.2f\n", total);
    fclose(file);

    return 0;
}