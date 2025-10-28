//1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>

int main()
{
    printf("Name : SANJAM JAiN \nSap id : 590028474 \nBatch : BCA \nYear 2025-29\n");
    printf("------------------------------------------------------------ \n");
    
    int length ,width , peri , area; // intiating variables of length ,width ,perimeter and area

    printf("Enter lenght and width \n");
    scanf("%d %d" , &length , &width);

   peri = 2*(length+width);
   area = length*width;
   printf("area : %d \nperimeter : %d" , peri , area);
   return 0;

   
} 
