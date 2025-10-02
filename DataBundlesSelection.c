/*
Name :Bonface Mutinda 
RegNo:CT101/G/26531/25
ASSIGNMENT [Q3]
DESCRIPTION 
This is a program that prompts a user to choose a data package and displays the chosen data package

*/
#include <stdio.h>
int main ()
{
int choice;

while(1){
printf("WELCOME TO OUR DATA BUNDLE SERVICES \n");
printf("1. 100mb @ 50ksh\n");
printf("2. 500mb @ 200ksh \n");
printf("3. 1GB.  @ 350ksh\n");
printf("4. 2GB   @ 600ksh\n");
printf("pleas select an option between 1 and 4 : \n");
scanf("%d",&choice) ;

switch (choice){
case 1:
printf("You have selected 100mb. cost = 50ksh\n");
return 0;
case 2:
printf("You have selected 500mb. cost = 200ksh\n");
return 0;
case 3:
printf("You have selected 1GB. cost = 350ksh\n");
return 0;
case 4:
printf("You have selected 2GB. cost = 6000ksh\n");
return 0;
default :
printf("invalid choice please select a number i.e 1 or 2 or3...\n");
}
}
}