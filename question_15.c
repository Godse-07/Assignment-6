//15.	Write a program to find number of even digits of a number.  Input 423 output 2. Input 21151 output 1.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int n=0;
    while (number>0)
    {
        if((number%10)%2==0){
            n++;
        }
        number/=10;
    }
    printf("%d", n);
}