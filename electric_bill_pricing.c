/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 5 ASSIGNMENT [Q1]
DESCRIPTION :
Program that defines a function calculateElectricBill() to compute
the total electricity bill based on the number of units consumed.
Rates applied:
- First 100 units  → KSh. 10 per unit
- Next 100 units   → KSh. 15 per unit
- Above 200 units  → KSh. 20 per unit
*/

#include <stdio.h>

// Function prototype (declaration)
float calculateElectricBill(int units);

int main() {
    int units;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);

    printf("Total Electricity Bill = KSh. %.2f\n", totalBill);

    return 0;
}

// Function definition
float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}