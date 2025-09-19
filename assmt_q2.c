/* 
   Program to input and display:
   1. Name
   2. Age
   3. Registration Number
   4. Height
   5. Bank Balance
   6. Phone Number
*/

#include <stdio.h>

int main() {
    char name[50];
    int age;
    char regNo[30];
    float height;
    double bankBalance;
    char phoneNumber[15];

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Registration Number: ");
    scanf("%s", regNo);

    printf("Enter your Height (in meters): ");
    scanf("%f", &height);

    printf("Enter your Bank Balance: ");
    scanf("%lf", &bankBalance);

    printf("Enter your Phone Number: ");
    scanf("%s", &phoneNumber);
    printf("\n_________________________\n");
    printf("\n Your Details \n");
    printf("\n_________________________\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Registration Number: %s\n", regNo);
    printf("Height: %.2f m\n", height);
    printf("Bank Balance: %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}