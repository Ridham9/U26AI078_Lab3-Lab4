#include<stdio.h>
void main()
{
    int f,f1,f2,n;
    f1=0;
    f2=1;
    printf("Enter the value of n=");
    scanf("%d",&n);
    
    while(n>0)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        f++;
        n--;
    }
    printf("Fibonacci Series=\t%d",f);
}