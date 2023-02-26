//11.	Write a program, which reads two number (assume that both have same number of digits). The program outputs the sum of product of corresponding digits. Input 327 and 539 output 3x5+2x3+7x9=84. Input 5624 & 6435 output 5x6+6x4+2x3+4x5=80.
#include<stdio.h>
void main(){
    int number1;
    int number2;
    int m=0,n=0,o;
    scanf("%d", &number1);
    scanf("%d", &number2);
    while (number1>00 && number2>00)
    {
        m=(number1%10);
        n=(number2%10);
        o+=(m*n);
        number1/=10;
        number2/=10;
    }
    printf("%d", o);
}