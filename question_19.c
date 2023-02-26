//19.	Write a program to print the last digit of an integer number, which is multiple of 3. e.g. input 23617 output 6.
#include<stdio.h>
void main(){
    int number,m;
    scanf("%d", &number);
    while (number>0)
    {
        m=number%10;
        if(m%3==0){
            printf("%d", m);
            break;
        }
        number/=10;
    }
    
}