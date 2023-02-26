//23.	Write a program to find sum of numbers formed by exchanging consecutive digits. Input 2415 output: 42+14+51=107.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int sum=0,x=0,y=0;
    while (number>9)
    {
        x=number%10;
        number=number/10;
        y=number%10;
        sum=sum+y+(x*10);
    }
    printf("%d", sum);
}