//36.	Write a program to print the kth digit e.g. input 23617 and k=4 output 1.

#include <stdio.h>
#include <math.h>

int main() {
    int num, k, digit,rev=0;
    scanf("%d", &num);
    scanf("%d", &k);
    while (num!=0)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    digit = (int)( rev / pow(10, k-1)) % 10;
    printf("%d", digit);
    return 0;
}
