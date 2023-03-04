//44.	Write a program, which reads a number x and a digit (integer) y and puts y as first digit in x. If x=2531 and y=8 then output is 82531.

#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
    int number,a;
    char num_str[30];
    scanf("%d", &number);
    scanf("%d", &a);
    
    sprintf(num_str, "%d", number);

    int len = strlen(num_str);
    int b=pow(10,len);
    printf("%d", b+number);
}