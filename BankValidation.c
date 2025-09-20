/*
Name :Bonface mutinda
RegNo:CT101/G/26531/25
Assignment 2 
[Question 1.]

Description
this is a program that checkif a loan applicant is over 21 years,if true,it proceeds and tests the apllicants annual salary,for them to secure a loan,it has to be greater than 21,000.


*/


#include <stdio.h>

int main()
 {
 int Age;
 int Income;
 
 printf("welcome to our Bank.This is the loans Department.Enter details for validation\n ");
 
 printf("Enter Age: ");
 scanf("%d",&Age);
 
 //VALIDATION COMPLEX
    if(Age >21){
        printf("Enter your Annual Salary: ");
        scanf("%d",&Income);
             if(Income > 21000){
             printf("Congratulations🎊 You Qualify For A Loan.");
             }
             else {
                 printf("Unfortunately, we are unable to offer you a loan at this time😔.Your Annual Salary limits Our Comitment"); 
             }
    }
    else{
    printf("Unfortunately, we are unable to offer you a loan at this time😔.Your Age Bracket Limits You");
    }
    return 0;
}