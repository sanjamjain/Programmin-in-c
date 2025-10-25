
#include <stdio.h>

int main()
{
    int ar_num;
    printf("enter the no of elements u want to enter ");
    scanf("%d" , &ar_num);
    int arr[ar_num];
    int pos,nev =0,zero=0;
	int i;
    for (i = 0;i < ar_num;i++)
    {
        printf("Enter element no %d\t", i+1);
        scanf("%d" , &arr[i]);

    }
        for (i = 0;i < ar_num;i++)
    {
        if(arr[i] > 0)
        {
        	pos++;
		}
        else if(arr[i] < 0)
        {
            nev++;
        }
        else
        {
            zero++;
        }

    }
    printf("no of positive nos - %d \nno of negative nos - %d \nno of zeros - %d \n" ,pos,nev,zero);
    
    return 0;
}
