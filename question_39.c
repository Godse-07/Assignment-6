//39.	Write a program, which reads a number the finds special sum in the following way. If number is 2314 then output is 2314 + 231 + 23 + 2 = 2570. If input number is 223 then output is 223 + 22 + 2 = 247.

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int number,digit;
    int a=number;
    scanf("%d", &number);
    char num_str[20];
    sprintf(num_str, "%d", number);
    int len=strlen(num_str);
    
    int sum=0;
    for (int i = 0; i <=len ; i++)
    {
        digit=number/(int)pow(10,i);
        sum=sum+digit;
    }
   // sum=sum+a;
    printf("%d", sum);
    
}