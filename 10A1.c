#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("-%d",i);
            sum-=i;
        }
        else  if(i%2!=0)
        {
            printf("+%d",i);
            sum+=i;
        }
    }
    printf("\nsum=%d",sum);
}