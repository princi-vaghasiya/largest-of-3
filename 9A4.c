#include <stdio.h>

void main() {
    int start = 1;       
    int difference = 3;  
    
    for (int i = 0; i < 50; i++) {
        printf("%d\n", start + i * difference);
    }
}
