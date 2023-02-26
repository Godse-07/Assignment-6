//26.	Write a program, which gives the sum of digits at even location of a integer number. Input 2314 output 3+4=7. Input 72314 output: 7+3+4=14 Input 572314 output 7+3+4=14.
//An error in question if input is 2314 then output 1+2=3 not 3+4=7
#include <stdio.h>

int main() {
    int n, digit, position = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (position % 2 == 0) {
            sum += digit;
        }
        position++;
        n /= 10;
    }

    printf("Sum of digits at even positions: %d", sum);

    return 0;
}

