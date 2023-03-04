//48.	Write a program, which reads an integer. The program outputs the digits are 3 2 5 1 2 the output is  21523.

#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int ans;
    while (number!=0)
    {
        ans=ans*10+(number%10);
        number/=10;
    }
    printf("%d", ans);
}