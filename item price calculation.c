#include <stdio.h>
int main () 
{
char Item [30];
int Quantity;
int TotalPrice;

    printf("Enter an item to purchase : ");
    scanf("%29s",Item);
    
    printf("How many %s's do you want : ",Item);
    scanf("%d",&Quantity);
printf("Price per %s is 10 shillings. ",Item);

TotalPrice =Quantity * 10;

printf("You will pay %d\n",TotalPrice);

return 0;





}