// write aprogram to perform for arthemetic operations on two variables
#include <stdio.h>

int main() {
printf("Name : SANJAM JAiN \nSap id : 590028474 \n");
printf("------------------------------------------------------------ \n");
    int a, b, sum, subs;
    float multi, divi;

    printf("Enter first no:\n");
    scanf("%d", &a);
    printf("Enter second no:\n");
    scanf("%d", &b);

    printf("The two numbers are %d and %d\n", a, b);

    sum = a + b;
    subs = a - b;
    multi = (float)a * b;
    divi = (float)a / b;
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subs);
    printf("Multiplication: %f\n", multi);
    printf("Division: %f\n", divi);

    return 0;
}