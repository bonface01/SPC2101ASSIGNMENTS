/*
Name :Bonface mutinda
RegNo:CT101/G/26531/25
Assignment 2 
[Question 1.]

Description
This is A Program that will calculate both Surface Area And
Volume By only entering the Rarius and height


*/


#include <stdio.h>

int main() {
   float pi = 3.142;
   int r;
   int h;
   float v;
   float s;
   
printf("This is a program to calculate both volume and surface area of a cylinder \n");
printf("Enter Radii: \n");
scanf("%d",&r);

printf("Enter Height: \n");
scanf("%d",&h);

v=pi*r*r*h;
s=(2*pi*r*r)+(2*pi*r*h);


//results

printf("_______________________________________\n");
printf("             Results\n");
printf("_______________________________________\n");
         printf("Volume=%.4fcm\n",v);
    printf("SurfaceArea=%.4fcm\n",s);
printf("_______________________________________\n") ;  

    return 0;
}