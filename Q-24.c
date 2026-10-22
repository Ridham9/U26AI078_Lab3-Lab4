#include<stdio.h>
void main()
{
    float x,Y,n;
    printf("Enter the value of n=");
    scanf("%f",&n);
    printf("\nEnter the value of x=");
    scanf("%f",&x);
    if(n==1)
    {
        printf("\nY=%f",1+x);
    }
    else if(n==2)
    {
        printf("\nY=%f",1+x/n);
    }
    else if(n==3)
    {
        printf("\nY=%f",1+x*n);
    }
    else
    {
        printf("\nY=%f",1+n*x);
    }
}