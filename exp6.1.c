//6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include <stdio.h>

int main()
{
    int ar_num;
    printf("enter the no of elements u want to enter");
    scanf("%d" , &ar_num);
    int arr[ar_num];
    int max =0 ;
	int i;
    for (i = 0;i < ar_num;i++)
    {
        printf("Enter element no %d\t", i+1);
        scanf("%d" , &arr[i]);

    }
        for (i = 0;i < ar_num;i++)
    {
        if(arr[i] >= max)
        {
        	max = arr[i];
		}

    }
    printf("the maximum is - %d" ,max);
    
    return 0;
}
