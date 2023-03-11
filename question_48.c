//48.	48.	Write a program, which reads an integer (n) and n digits of a number (integer) in reverse order. 
//          The program outputs the number. e.g. n=5 and digits are 3 2 5 1 2 the output is  21523.

#include<stdio.h>
void main(){
    int number,k;
    scanf("%d", &k);
    scanf("%d", &number);
    int ans = 0;
    while (number!=0)
    {
        ans=ans*10+(number%10);
        number/=10;
    }
    printf("%d", ans);
}
