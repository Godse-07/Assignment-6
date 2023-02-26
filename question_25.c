//25.	Write a program to print digits, which are multiple of 3 of a number. e.g. input 23617 output 6,3.
#include <stdio.h>

int main() {
    int n, digit;
    scanf("%d", &n);

    printf("Digits that are multiples of 3: ");
    while (n != 0) {
        digit = n % 10;
        if (digit % 3 == 0) {
            printf("%d, ", digit);
        }
        n /= 10;
    }

    return 0;
}
