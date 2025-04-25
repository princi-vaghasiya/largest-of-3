#include<stdio.h>
void main(){
    int a, b, c;
    
    printf("Enter three integers a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    while(a<=100){
        b=a;
        while(b<=100){
            c=b;
            
            while(c<=100){
                if(a*a+b*b==c*c){
                    printf("%d,%d,%d",a,b,c);
                }
                c++;
            }
            b++;
        }
        a++;
    }

    
}
