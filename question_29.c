//29.	Write a program to prints the biggest digit and its location (from beginning). e.g. in 7396348 biggest digit is 9 and its location is 3rd  from beginning.

#include<stdio.h>
void main(){
    int number,len=1,largest=0,n,index,a;
    scanf("%d", &number);
    a=number;
    while (number!=0)
    {
        number/=10;
        len++;
    }
    while (a>0)
    {
        n=a%10;
        len--;
        if(n>largest){
            largest=n;
            index=len;
        }
        a/=10;
    }
    
    printf("%d %d", largest, index);
    
}