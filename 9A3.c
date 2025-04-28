#include <stdio.h>

void main() {
    int sum = 0, n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= 2 * n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    
    printf(" %d is %d\n", 2 * n, sum);
}





