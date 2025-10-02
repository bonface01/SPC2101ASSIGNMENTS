
/*
Name :Bonface mutinda 
RegNo:CT101/G/265313/25
WEEK 3 ASSIGNMENT
[QUESTION 2]
DESCRIPTION:This is a program to calculate water bill by:
a. prompting user to enter units used
b. calculating the total expenditure 
I.e 0 to 30 units is 20ksh per unit
    31 to 60 units is 25ksh per unit 
    above 60 units Is 30ksh per unit
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    float c; 
    
    printf("Enter the units used : \n");
    scanf("%d",&a);
    
        if(a>0 && a<=30){
        b=20;
        }
        else if(a>30 && a<=60){
        b=25;
        }
        else{
        b=30;
        }
    c=b*a;
    
    printf("Total amount to be paid is KSH%.2f",c);
    
    return 0;
    }