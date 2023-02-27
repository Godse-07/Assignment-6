//42.	Write a program, which reads a number and finds the location of first even digit. If the number is 18263 then the output is 2 since the first even digit occurs at 2nd place.

#include<stdio.h>
void main(){
    int number,rev,a,counter=1;
    scanf("%d", &number);
    while (number!=0)
    {
        rev=rev*10+(number%10);
        number/=10;
    }
    while (rev!=0)
    {
        a=rev%10;
        if(a%2==0){
            printf("%d", counter);
            break;
        }
        counter++;
        rev/=10;
    }
    
    
}