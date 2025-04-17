#include<stdio.h>
void main()
{
    int sum=0,i,a;

    printf("enter a");
    scanf("%d",&a);

    while(i<=2*a)
    {
        if(a%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    printf("%d",sum);

}