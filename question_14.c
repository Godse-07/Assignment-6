//14.	Write a program to find number of digits of a number. Input 423 output 3. Input 21151 output 5.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int n=0;
    while (number>0)
    {
        number/=10;
        n++;
    }
    printf("%d", n);
}