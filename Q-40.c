#include<stdio.h>
void main()
{
    int i,sum=0,n,num;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&num);
        if(num<0)
        {
            break;
        }
        else
        {
            sum+=num;
        }
        
    }
    printf("\nSum of positive numbers=%d",sum);
}