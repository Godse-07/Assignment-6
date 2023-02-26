//9.	Write program to find sum of all digits. Input 23617 outputs 2+3+6+1+7=19.
#include<stdio.h>
void main(){
    int number,sum=0;
    scanf("%d", &number);
    while (number!=0)
    {
        sum+=(number%10);
        number/=10;
    }
    printf("%d", sum);
}