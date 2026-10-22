#include<stdio.h>
void main()
{
    float a;
    printf("Enter the sales");
    scanf("%f",&a);
    if(a<=500)
    {
        printf("\nCommission=%f",a*0.05);
    }
    if(500<a&&a<=2000)
    {
        printf("\nCommission=%f",35+(a*0.1));
    }
    if(2000<a&&a<=5000)
    {
        printf("\nCommission=%f",185+(a*0.12));
    }
    if(a>5000)
    {
        printf("\nCommission=%f",a*0.125);
    }

}