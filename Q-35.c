#include<stdio.h>
void main()
{
    int i,q,sum=0;
    printf("Enter any number");
    scanf("%d",&i);
    while(i>9)
    {
        sum=0;
        while(i!=0)
    {
        q=i%10;
        sum+=q;
        i=i/10;
    }
    i=sum;
}
    printf("Sum of individual number= %d",i);
}