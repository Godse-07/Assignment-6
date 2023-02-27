//33.	Write a program to print the kth even digit from last. e.g. input 23687 and k=2 output 6.

#include<stdio.h>
void main(){
    int number,k,counter=0,even_counter=0,n;
    scanf("%d", &number);
    scanf("%d", &k);
    while (number!=0)
    {
        n=number%10;
        if(n%2==0){
            even_counter++;
            if(even_counter==k){
                printf("%d", n);
                break;
            }
        }
        counter++;
        number/=10;
    }
    
}