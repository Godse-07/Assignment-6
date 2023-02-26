//17.	Write a Program to print the digit immediately before the last even digit.     input 23613 output 3
#include<stdio.h>
void main(){
    int number,m;
    scanf("%d", &number);
    while (number>0)
    {   
        m=number%10;
        if(m%2==0){
            number/=10;
            m=number%10;
            printf("%d", m);
            break;
        }
        number/=10;
    }
}