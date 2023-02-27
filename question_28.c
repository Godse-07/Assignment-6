//28.	Write a program to prints the biggest digit and its location (from last). e.g. in 7396348 biggest digit is 9 and its location is 5th  from last.

#include<stdio.h>
void main(){
    int number,largest=0,n,counter=0,index;
    scanf("%d", &number);
    while (number>0)
    {
        n=number%10;
        counter++;
        if(n>largest){
            largest=n;
            index=counter;
        }
        number/=10;
        
    }
    printf("%d %d", largest,index);
}