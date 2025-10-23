/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 5 ASSIGNMENT [Q3]
DESCRIPTION :
Program that defines a function convertToCelsius() which converts
a temperature value from Fahrenheit to Celsius using the formula:
C = (F - 32) × 5 / 9
*/

#include <stdio.h>

// Function prototype
float convertToCelsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}

// Function definition
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}