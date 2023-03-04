//45.	Write a program, which reads a number and adds 1 to every digit. If input is 2314 then output is 3425. Assume that no digit is 9.

#include <stdio.h>

int main() {
    int num, digit, new_digit, result = 0, place = 1;
    
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10;
        new_digit = (digit + 1) % 10;
        result += new_digit * place;
        place *= 10;
        num /= 10;
    }
    
    printf("%d", result);
    
    return 0;
}
