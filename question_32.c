//32.	Write a program to print the digit immediately after the first even digit. In above case 3.

#include<stdio.h>
void main(){
    int n,number;
    scanf("%d", &number);
    while (number!=0)
    {
        n=number%10;
        if(n%2==0){
            printf("%d", (number/10)%10);
            break;
        }
        number/=10;
    } 
}