//51.	Write a program, which reads an integer (n) and n digits of a float number (between 0 and 1) in correct order. The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  0.32512.

#include <stdio.h>
#include <math.h>

int main() {
    int n, i,m=5;
    float num = 0, digit;
    
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    
    printf("Enter the digits in correct order:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &digit);
        num += digit / pow(10, i+1);
    }
    
    printf("The number is: %.5f\n", num);
    
    return 0;
}
