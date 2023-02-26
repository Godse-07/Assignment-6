//10.	Write a program, which will find sum of product of consecutive digits of a number. e.g. when the input is 23145 the output is 2x3 + 3x1 + 1x4 + 4x5 = 33. Input 754 output 55. 
#include<stdio.h>
void main(){
    int y=0, z=0;
   int number;
   scanf("%d", &number);
   while(number>0)
   {
    y= (number%10);
    number=number/10;
    y=y*(number%10);
    z=z+y;
   }
   printf("%d", z);
}