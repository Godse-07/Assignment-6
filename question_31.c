//31.	Write a program to print the digit immediately before the first even digit. e.g. input 71236 output 1.

#include<stdio.h>
void main(){
    int number,rev=0,n;
    scanf("%d", &number);
    while (number!=0)
    {
        rev=rev*10+(number%10);
        number/=10;
    }
    int prev_digit = -1, current_digit;

    while (rev > 0) {
        current_digit = rev % 10;
        if (current_digit % 2 == 0 && prev_digit != -1) {
            printf(" %d.\n", prev_digit);
            return 0;
        }
        prev_digit = current_digit;
        rev /= 10;
    }    
}