/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 6 ASSIGNMENT [Q1]
DESCRIPTION :
1D Array – Weekly Revenue Tracker
Program that records and calculates the weekly revenue of a hotel.
It uses a 1D array revenue[7] to store total revenue for each day of the week.
The program then calculates and displays:
- The total weekly revenue.
- The average daily revenue.
*/

#include <stdio.h>

int main(void)
{
    int revenue[7];
    int sum = 0;
    int avg;
    int i;

    for(i = 0; i < 7; i++) {
        printf("Enter Revenue for Day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        sum = sum + revenue[i];
    }

    avg = sum / 7;

    printf("\nTotal Weekly Revenue = %d\n", sum);
    printf("Average Daily Revenue = %d\n", avg);

    return 0;
}