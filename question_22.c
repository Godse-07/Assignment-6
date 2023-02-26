//22.	Write a program, which finds the sum of numbers formed by consecutive digits of an integer number. Input 2415 output 24+41+15=80.
#include<stdio.h>
void main(){
    int number;
    int sum=0,z=0,x=0;
    scanf("%d", &number);
    while (number>9)
    {
        x=(number%10);
        number=(number/10);
        z=(number%10)*10;
        sum=sum+z+x;
    }
    printf("%d", sum);
}