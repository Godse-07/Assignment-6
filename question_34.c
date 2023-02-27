//34.	Write a program, which deletes all digits except last k digits. e.g. input 23617 and k=3 output 617.

#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int k,divisor=1,reminder;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        divisor*=10;
    }
    reminder=number%divisor;

    printf("%d", reminder);
    
}