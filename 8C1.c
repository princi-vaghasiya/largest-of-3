#include<stdio.h>
void main()
{
    int i,n,j;
    char a='A';
    int b=1;

    printf("enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c",a);
                a++;
            }
            else{
                printf("%d",b);
                b++;
            }
        }
        printf("\n");
    }
}