#include <stdio.h>
void convertToRoman(int num) {
    char result[100];
    int i = 0;

   
    while (num >= 1000) {
        result[i++] = 'M'; 
        num -= 1000;          
    }

    
    while (num >= 900) {
        result[i++] = 'C'; 
        result[i++] = 'M'; 
        num -= 900;          
    }

    while (num >= 500) {
        result[i++] = 'D'; 
        num -= 500;          
    }

    while (num >= 400) {
        result[i++] = 'C'; 
        result[i++] = 'D'; 
        num -= 400;          
    }

    while (num >= 100) {
        result[i++] = 'C'; 
        num -= 100;          
    }


    while (num >= 90) {
        result[i++] = 'X'; 
        result[i++] = 'C'; 
        num -= 90;          
    }

    while (num >= 50) {
        result[i++] = 'L'; 
        num -= 50;          
    }

    while (num >= 40) {
        result[i++] = 'X'; 
        result[i++] = 'L'; 
        num -= 40;          
    }

    while (num >= 10) {
        result[i++] = 'X'; 
        num -= 10;          
    }

    while (num >= 9) {
        result[i++] = 'I'; 
        result[i++] = 'X'; 
        num -= 9;          
    }

    while (num >= 5) {
        result[i++] = 'V'; 
        num -= 5;          
    }

    while (num >= 4) {
        result[i++] = 'I'; 
        result[i++] = 'V'; 
        num -= 4;          
    }

    while (num >= 1) {
        result[i++] = 'I'; 
        num -= 1;          
    }
    result[i] = '\0'; 
    printf("The Roman numeral is: %s\n", result);
}

int main() {
    int number;
    
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    convertToRoman(number);

    return 0; 
}