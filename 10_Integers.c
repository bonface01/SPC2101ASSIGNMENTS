#include <stdio.h>

int main() {
    int numbers[10];
    int i, largest, smallest;

    printf("Enter 10 integers:\n");
    for(i ==1; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    smallest = numbers[0];
    
    for(i = 1; i < 10; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("\nThe largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}