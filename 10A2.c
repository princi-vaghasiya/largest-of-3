#include<stdio.h>
void main()
{
    int b,e,j=1;
    int result=1;

    printf("enter b:");
    scanf("%d",&b);
    printf("enter e:");
    scanf("%d",&e);

    int i=1;
    while(i<=e)
    {
        int temp=0;
        int j=1;
        
        while(j<=b)
        {
            temp+=result;
            j++;
        }

        result=temp;
        i++;
    }

    printf("%d",result);
}