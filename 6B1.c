#include<stdio.h>
void main()
{
    int sum=0,n,avg=0,positive=0,nagetive=0,sum1=0,sum2=0;
    float sum_positive,avg_nagetive,avg_positive,b;
    printf("enter n");
    scanf("%d",&n);
     
     while(i<=n)
     {
        printf("enter b");
        scanf("%d",&b);

        if(b>0)
        {
            positive++;
            sum1+=b;
        }else
        {
            nagetive++;
            sum2+=b;
        }
        i++;


     }
     avg_positive=sum_positive/positive;
     avg_nagetive=sum_positive/positive;

     printf("Average of positive numbers: %.2f\n", avg_positive); 
     printf("Average of negative numbers: %.2f\n",  avg_nagetive);


    
}