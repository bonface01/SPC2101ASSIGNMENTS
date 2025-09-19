

#include <stdio.h>
int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

        if (marks > 69){
        printf("A Distinction");
        }
        else if(marks >49) {
        printf("B credit");
        }
        else if (marks >39){
        printf("C pass");
        }
        else {
        printf("F Fail");
        }
 return 0;
 }       