#include<stdio.h>
void main()
{
    int n,r,k,sum=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;

    while(k)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}