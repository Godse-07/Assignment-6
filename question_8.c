//8.	Write program to print the second digit. input 23516 the output is 3. Input 714, 1.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int secondDigit;
    while (number>99)
    {
        number=number/10;
        secondDigit=number%10;
    }
    printf("%d", secondDigit);
}