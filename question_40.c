//40.	Write a program, which reads a number the finds special product. If number is 2314 then output is 4 + 1x4 + 3x1x4 + 2x3x1x4 = 44. If input number is 223 then output is 3 + 2x3 + 2x2x3 = 21.

#include<stdio.h>
#include<math.h>
void main(){
    int number,mul=1,sum=0;
    scanf("%d", &number);
    while (number!=0)
    {
        mul=mul*(number%10);
        sum+=mul;
        number/=10;
    }
    printf("%d", sum);
}