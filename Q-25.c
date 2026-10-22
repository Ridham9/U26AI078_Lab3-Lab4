#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter any Number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    printf("%dX%d=%d\n",num,i,num*i);
}