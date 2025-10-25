//6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.

#include <stdio.h>

int main()
{
    int ar_num;
    printf("enter the no of elements u want to enter ");
    scanf("%d" , &ar_num);
    int arr[ar_num];

    int fre=0,num;
	int i;
    for (i = 0;i < ar_num;i++)
    {
        printf("Enter element no \t%d", i+1);
        scanf("%d" , &arr[i]);

    }

    printf("enter the no you want to find the frequency of");
    scanf("%d" , &num);

    for (i = 0;i < ar_num;i++)
    {
        if (arr[i] == num)
        fre++;

    }
    printf("No %d has occured ------ %d ------ no of times" ,num,fre);
    
    return 0;
}
