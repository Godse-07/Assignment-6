//41.	Write a program, which reads a number and finds the location of last even digit. If the number is 18263 then the output is 4 since the last even digit 6 occurs at 4th place.

#include<stdio.h>
#include<string.h>
void main(){
    int number,a;
    scanf("%d", &number);
    char num_str[20];
    sprintf(num_str, "%d", number);
    int counter=strlen(num_str);
    while (number!=0)
    {
        a=number%10;
        if(a%2==0){
            printf("%d", counter);
            break;
        }
        counter--;
        number/=10;
    }
}