//50.	Write a program, which reads a float number (between 0 and 1)  and prints the sum of its first five digits. e.g. input 0.231562 output 2+3+1+5+6  = 17.

#include <stdio.h>

int main() {
    float num;
    int sum = 0, digit, i;
    
    printf("Enter a number between 0 and 1: ");
    scanf("%f", &num);
    
    printf("The first five digits are: ");
    for (i = 0; i < 5; i++) {
        num *= 10;
        digit = (int)num;
        sum += digit;
        num -= digit;
        printf("%d", digit);
    }
    
    printf("\nThe sum of the first five digits is: %d\n", sum);
    
    return 0;
}
