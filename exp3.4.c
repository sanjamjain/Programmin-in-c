//3.5. According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d" ,&year);
    int i,nos;
    int tdays = 0;
    for ( i = 01; i < year; i++)
    {

        tdays+=1;
        if (((i%4==0)&&(i%100!=0))|(i%400==0))
        {
            tdays+=1;
        }
        else;

    }

    int day = tdays%7;
    
    switch (day)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("TUESDAY");
        break;
    case 2:
        printf("WEDNESDAY");
        break;
    case 3:
        printf("THURSDAY");
        break;
    case 4:
        printf("FRIDAY");
        break;
    case 5:
        printf("SATERDAY");
        break;
    case 6:
        printf("SUNDAY");
        break;
    
    default:
    printf("AN UNKNOWN ERROR OCCURED PLEASE TRY AGAIN");
        break;
    }
    return 0;

}
