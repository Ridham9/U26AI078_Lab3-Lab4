#include<stdio.h>
void main()
{
    float a;
    printf("Unit consumption=");
    scanf("%f",&a);
    if(a>=0&&a<=200)
    {
        printf("\nAmount to be paid=%f",a*0.5);
    }
    if(a>200&&a<=400)
    {
        printf("\nAmount to be paid=%f",100+(a*0.65));
    }
    if(a>400&&a<=600)
    {
        printf("\nAmount to be paid=%f",230+(a*0.80));
    }
    if(a>600)
    {
        printf("\nAmount to be paid=%f",425+(a*0.125));
    }
}