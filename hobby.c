#include <stdio.h>
int main () 
{
char Name [30];
char Place[20];
char Hobby[15];

    printf("Enter your Name\n");
    scanf("%29s",Name);
    
    printf("What is your hobby\n");
    scanf("%14s",Hobby);
    
    printf("what's your City");
    scanf("%19s",Place);
 
 printf("Your name is %s you live in %s and you like %s\n",Name,Place,Hobby);

return 0;
}