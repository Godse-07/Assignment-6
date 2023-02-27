//30.	Write a program, which reads an integer and prints another integer. The output is reverse of the input. e.g. for input 27921 the output is 12972. Also print the double of the answer (i.e. 25944).

#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int rev=0;
    while (number!=0)
    {
        rev=rev*10+(number%10);
        number/=10;
    }
    printf("%d", rev);
    printf("\n %d", rev*2);
    
}