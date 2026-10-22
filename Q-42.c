#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    if(n%2==0||n%3==0||n%5==0||n%7==0)
    {
        if(n==2||n==3|n==5|n==7)
        {
            printf("It is prime number");
        }
        else
        {
            printf("It is composite number");
        }
    }
    else
    {
        if(n==1)
        {
            printf("Neither composite nor Prime");
        }
        else
        {
            printf("It is prime number");
        }
    }
}