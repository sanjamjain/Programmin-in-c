//4. ⁠Write a program to find the roots of the quadratic equations.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Name : SANJAM JAiN \nSap id : 590028474 \nBatch :BCA \n Year 2025 -29\n");
    printf("------------------------------------------------------------ \n");
    float X1, X2, b, a, c, discriminant;

    printf("Enter the value of b \n");
    scanf("%f" , &b);
    printf("Enter the value of a \n");
    scanf("%f" , &a);
    printf("Enter the value of c \n");
    scanf("%f" , &c);
    discriminant = (b*b) - (4*a*c);

    X1 = ( -b + sqrt(discriminant) ) / (2*a);
    X2 = ( -b - sqrt(discriminant) ) / (2*a);
    printf("The roots are real and different.\n");
    printf("X1 = %f and X2 = %f\n", X1, X2);
    return 0 ;
}
