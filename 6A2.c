#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    while (a <= b)
    {
        if (a % 2 == 0 && a % 5 != 0)
        {
            printf("%d ", a);
        }
        a++;  // increment inside the loop
    }
}
