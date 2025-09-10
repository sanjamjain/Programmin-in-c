// write a program to find compound interest
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name : SANJAM JAiN \nSap id : 590028474 \nBatch :BCA \n Year 2025 -29\n");
    printf("------------------------------------------------------------ \n");
    float r,ci,principal,n;
    printf("enter the principal : ");
    scanf("%f" , &principal);
    printf("enter the rate : ");
    scanf("%f" , &r);
    printf("enter the time : ");
    scanf("%f" , &n);
    ci = principal*pow((1+r/100),n)+principal;
   printf("Compound interest : %f" , ci);
   return 0 ;
}
