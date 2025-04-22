#include<stdio.h>
void main() 
{
    int n, k, i, prime, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    
    for(k = 2; k < n; k++) {
        prime = 1;  
        
        for(i = 2; i * i <= k; i++) {
            if(k % i == 0) {
                prime = 0;  
                break;
            }
        }
        if(prime == 1) {
            printf("%d ", k);  
            sum += k;          
        }
    }
    printf("\nSum of prime numbers = %d\n", sum);
}
