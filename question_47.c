//47.	Write a program, which reads an integer and prints another integer. In the output all even digits are retained and odd digits are removed. e.g. input 23145 output 24.

#include <stdio.h>

int main() {
    int num, result = 0, digit,sum=0;
    
    scanf("%d", &num);
    
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            result = result * 10 + digit;
        }
        num /= 10;
    }
    while(result!=0){
        sum=sum*10+result%10;
        result/=10;
    }
    
    printf("%d", sum);
    
    return 0;
}
