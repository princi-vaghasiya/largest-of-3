
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter a nmbr:");
    scanf("%f",&a);
    printf("enter a nmbr:");
    scanf("%f",&b);
    printf("enter a nmbr:");
    scanf("%f",&c);
    if(a>b){
        if(a>=c){
            printf("a is largest");
        }
        else{
            printf("c is largest");
        }

    }
    else {
        if(b>=c){
        printf("b is Largest");
        }
        else{
            printf("c is largest");
        }
    }


    }
