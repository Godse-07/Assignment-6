//43.	Write a program, which reads a number and prints a number after deleting the first digit. If input is 2314 then output is 314. If input is 56 then output is 6.

#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
    int number,rev=0,first_digit,ans=0;
    scanf("%d", &number);
    int b=number;
    char num_str[30];
    sprintf(num_str,"%d",number);
    int len=strlen(num_str);
    while (number!=0)
    {
        rev=rev*10+(number%10);
        number/=10;
    }
    first_digit=rev%10;
    ans=b-(first_digit*(int)pow(10,len-1));
    printf("%d", ans);
}