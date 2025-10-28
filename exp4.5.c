/* Experiment 4: Loops-
Ramanujan Number is the smallest number that can be expressed as the
sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.
Example: 1729 = 12^3 + 1^3 = 10^3 + 9^3*/

#include <stdio.h>
int main()
{
    printf("Name - Sanjam Jain\nSAP ID - 590028474\nCourse - BCA\nBatch - B6");
    printf("\n-------------------------------------\n");

    int a, b, c, d;
    int limit = 20;
    int n1, n2;

    for(a=1; a<=limit; a++)
    {
        for(b=a; b<=limit; b++)
        {
            n1 = a*a*a + b*b*b;
            for(c=a+1; c<=limit; c++)
            {
                for(d=c; d<=limit; d++)
                {
                    n2 = c*c*c + d*d*d;
                    if(n1==n2)
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
