//18.	Write a program to print the digit immediately after the last even digit of a number. input 23613 output 1 
#include<stdio.h>
void main(){
    int n,number,y=0;
    scanf("%d", &number);
    while (number>0)
    {
        n=number%10;
        if(n%2==0){
            printf("%d", y);
            break;
        }
        y=number%10;
        number/=10;
    }   
}