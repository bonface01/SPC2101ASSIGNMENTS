/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 5 ASSIGNMENT [Q2]
DESCRIPTION :
Program that defines a function calculateFare() which computes
the total fare based on the distance traveled in kilometers.
The fare rate is fixed at KSh. 50 per kilometer.
*/

#include <stdio.h>

// Function prototype
float calculateFare(float distance);

int main() {
    float distance, totalFare;

    printf("Enter the distance traveled (in kilometers): ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total Fare = KSh. %.2f\n", totalFare);

    return 0;
}

// Function definition
float calculateFare(float distance) {
    float rate = 50.0;
    float fare = distance * rate;
    return fare;
}