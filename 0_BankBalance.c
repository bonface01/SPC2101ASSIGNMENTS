/*
Name :Bonface Mutinda 
RegNo:CT101/G/26531/25
WEEK 4 ASSIGNMENT [Q1]
DESCRIPTION :
Program that allows ATM withdrawals until balance becomes zero or negative
*/

*/

#include <stdio.h>

int main() {
int Balance = 500;
int Withdrawal;
int NewBalance;

while (Balance>=0) {

printf("Enter Amount to Withdraw :");
scanf("%d",&Withdrawal);
NewBalance =Balance -Withdrawal;

printf("You have Withdrawn %d\n",Withdrawal);
printf("Your NewBalance is: %d\n", NewBalance);
Balance=NewBalance;
}  
printf("Your Balance is insufficient\n");
return 0;

} 

