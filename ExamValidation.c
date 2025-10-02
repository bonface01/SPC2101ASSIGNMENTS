/*
Name :Bonface mutinda 
RegNo:CT101/G/265313/25
WEEK 3 ASSIGNMENT
[QUESTION 1]
DESCRIPTION:This is a program to validate if one is eligible for an exam if;
a. their class attendance is over 75%
b. their marks are greater than 40
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
   
    printf("Enter in terms of percentage your class attendance : \n");
    scanf("%d",&a);
    printf("Enter marks : \n");
    scanf("%d",&b);
   
        if(a<0||a>100){
            printf("Enter a valid percentage ,0 to 100\n");
        }
        else{
            if(a>75&&b>40)
            {
            printf("you are  eligible for the exam\n");
            }
        
            else{
            printf("you are not eligible for the exam");
           
            }
           
        }
    return 0;
    }