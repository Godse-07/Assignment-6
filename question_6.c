//6.	Write a program to print first digit. e.g. input 23617 output 2. Input 714 output 7.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    while(number>=10){
        number=number/10;
    }
    printf("%d", number);
}