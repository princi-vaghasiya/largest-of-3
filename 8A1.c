#include <stdio.h>
void main(){
    int n, a, i;
    int small, large;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    small = a;
    large = a;

    for(i = 1; i < n; i++){
        printf("Enter another integer: ");
        scanf("%d", &a);

        if(a < small){
            small = a;
        }
        if(a > large){
            large = a;
        }
    }

    printf("Smallest integer: %d\n", small);
    printf("Largest integer: %d\n", large);
}
