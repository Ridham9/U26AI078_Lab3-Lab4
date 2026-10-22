#include<stdio.h>
void main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if(a%2==0||a%3==0||a%5==0||a%7==0)
    {
        printf("This is not a prime number");
    }
    else if(a==1)
    {
        printf("Neither prime nor composite number");
    }
    else
    {
        printf("It is a prime number");
    }
}