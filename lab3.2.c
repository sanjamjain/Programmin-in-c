#include <stdio.h>
#include <math.h>
int main() {
	
	printf("Name : SANJAM JAiN \nSap id : 590028474 \nBatch : bca \nYear 2025 -29\n");
	printf("------------------------------------------------------------ \n");

    int b,a,c;
    printf("Enter the value of b \n");
    scanf("%d" , &b);
    printf("Enter the value of a \n");
    scanf("%d" , &a);
    printf("Enter the value of c \n");
    scanf("%d" , &c);
    int h,e,d;
    if ((a>b) && (a>c))
    {
    h=a*a;
    e=c*c;
    d=b*b;
    }
    else if ((c>a) && (c>b))
    {
    h=c*c;
    e=b*b;
    d=a*a;
    }
    else{
    h=b*b;
    e=c*c;
    d=a*c;
    }
    
    
if (((a+b)>c) || ((b+c)>a) || ((c+a)>b))
    {
        if ((a==b) && (b==c))
        printf("Equilatral Tringle");
        else if ((a==b) || (b==c) || (a==c))
        printf("isocelous Tringle");
        else if ((a!=b) && (b!=c) && (a!=c))
        printf("stalin Tringle");
        else if ( (h)==(e) + (d) )
        {
        printf("right angle Tringle");
        }
        else if ((a!=b) && (b!=c) && (a!=c))
        printf("stalin Tringle");
        
        
    }
}
