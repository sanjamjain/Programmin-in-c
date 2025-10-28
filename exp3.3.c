// 3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name : SANJAM JAiN \nSap id : 590028474 \nBatch : bca \nYear 2025 -29\n");
    printf("------------------------------------------------------------ \n");
    
    float BMI ,weight,height;
    
    printf("enter weight in kgs : \t");
    scanf("%f" , &weight);
    printf("enter height in meters : \t");
    scanf("%f" , &height);
    BMI = weight/pow(height,2);

    if (BMI<= 15 )
    printf("STARVATION");
    else if ((BMI > 15.1) && (BMI <= 17.5) )
    printf("ANOREXIC");
    else if ((BMI > 17.5) && (BMI <= 18.5) )
    printf("Underweight");
    else if ((BMI > 18.5) && (BMI <= 24.9) )
    printf("Ideal");
    else if ((BMI >= 25) && (BMI <= 29.9) )
    printf("Over weight"); 
    else if ((BMI >= 30 ) && (BMI <= 34.9) )
    printf("OBEASE");   
    else if ((BMI >= 35))
    printf("Extremely obese");

return 0;
}
