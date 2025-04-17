#include <stdio.h>
void main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d\n", n);
                       
    while (i <= n) {             
        printf("%d ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        i++;
    }
}
