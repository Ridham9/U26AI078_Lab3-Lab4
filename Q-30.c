#include<stdio.h>
void main()
{
    int i,q,num=0;
    printf("Enter any Number=");
    scanf("%d",&i);
    while(i!=0)
    {
    q=i%10;
    num=num*10 + q;
    i=i/10;
    }
printf("Reverse Number=%d",num);
}