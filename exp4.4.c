#include <stdio.h>

int main()
{
    float t_pop = 100000;
    float additional_p ;

    int i;
    for ( i = 1; i <= 10; i++)
    {
        additional_p = t_pop * (0.10);
        t_pop = (t_pop+additional_p);
        
        printf("At the end of year %d - %f\n" ,i,t_pop);

    }
    
}
