#include <stdio.h>
int main() 
{
    char Name [50];
    int Age ;
    char Color[20];
    
    printf("Enter Your Name\n");    
    scanf("%49s" , Name);
    
    printf("Enter Your Age\n");
    scanf("%d" ,&Age);
    
    printf("Enter your Favourite Color\n");
    scanf("%19s" , Color);

printf("You name is %s you are %d years old and your Favourite Color is %s\n", Name,Age,Color );

    return 0;




}