#include<stdio.h>
void main()
{
    int a,ans=1;
    printf("enter a:");
    scanf("%d",&a);
     
    for(int i=1;i<=a;i++)
    {
    int temp=0;
    for(int j=1;j<=ans;j++)
    {
        temp+=i;
    }
    ans=temp;
    }
    printf("ans=%d",ans);
}