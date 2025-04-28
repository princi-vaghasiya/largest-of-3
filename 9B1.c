#include<stdio.h>
void main(){
    int i,n,a,avg,sum=0,pos=0,nag=0,sum1=0;

    printf("enter total number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("enter n");
        scanf("%d",&n);
        if(n>0){
            pos++;
            sum+=i;

        }else{
            nag++;
            sum1+=1;

        }
        avg=sum/n;
        avg=sum1/n;
    }
    printf("pos avg%d",pos);
    printf("nag avg%d",nag);
}