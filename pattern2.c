#include<stdio.h>

void main() {
    int i, j, k, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(k = 0; k < n - i; k++) { 
            for(j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}
