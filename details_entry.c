/*
Name :Bonface Mutinda 
RegNo:CT101/G/26531/25
Description : A program to enter Name,PhoneNumber, BankBalance, Height and Age
*/
#include <stdio.h>

int main() {
    char Name[50];
    long PhoneNumber;
    float BankBalance;
    float Height;
    int Age;

    printf("Enter your details below:\n");

    printf("Name: ");
    scanf("%s", Name);

    printf("Phone Number: ");
    scanf("%ld", &PhoneNumber);

    printf("Bank Balance: ");
    scanf("%f", &BankBalance);

    printf("Height (in cm): ");
    scanf("%f", &Height);

    printf("Age: ");
    scanf("%d", &Age);

    printf("\n--- Details ---\n");
    printf("Name        : %s\n", Name);
    printf("Phone Number: %ld\n", PhoneNumber);
    printf("Bank Balance: %.2f\n", BankBalance);
    printf("Height      : %.1f cm\n", Height);
    printf("Age         : %d years\n", Age);

    return 0;
}