//WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num
# include <stdio.h>

int main()
{
    int num ,till_what;
    printf("Enter the no you want to have the tabel of : \n");
    scanf("%d" , &num);
    printf("Enter till which no you want to have your table : \n");
    scanf("%d" , &till_what);
    int i =0 ;
    for (i =1 ; i <=till_what;i++)
    {
        printf("%d * %d :" ,num,i);
        printf("%d \n" , (num*i));
    }


}
