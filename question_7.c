//7.	Write program to output the product of first digit and number. For above input 2*23617=47234 and 7*714=4998.
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int product=1;
    int num1=number;
    while(number>=10){
        number=number/10;
    }
    product=number*num1;
    printf("%d", product);
}