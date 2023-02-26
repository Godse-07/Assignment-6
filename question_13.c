//13.	Write a program to find sum of even digits of a number. Input: 23617 output: 2+6=8. Input: 4856, output:18.
#include<stdio.h>
void main(){
    int number,sum=0,m;
    scanf("%d", &number);
    while (number>0)
    {
        m=number%10;
        if(m%2==0){
            sum+=m;
        }
        number/=10;
    }
    printf("%d", sum);
}