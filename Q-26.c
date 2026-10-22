#include<stdio.h>
void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("Enter any Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(i%2==0)
    {
        sumeven=sumeven+i;

    }
    else
    {
        sumodd=sumodd+i;
    }
    printf("Sum of all even numbers=%d\n",sumeven);
    printf("Sum of all odd numbers=%d",sumodd);
    
}
