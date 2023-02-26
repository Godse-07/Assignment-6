//16.	Write a program to print the last even digit of a number. e.g. input 23613 output 6. 
#include<stdio.h>
void main(){
    int number;
    int m;
    scanf("%d", &number);
    while (number>0)
    {
        m=number%10;
        if(m%2==0){
            printf("%d", m);
            break;
        }
        number/=10;
    }
}