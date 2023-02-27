//27.	Write a program, which reads an integer and prints another integer. In the output all even digits are retained and odd digits are decrement by 1. e.g. input 23145 output 22044.

#include<stdio.h>
#include<math.h>
void main(){
    int number,i=0,new_number=0,u;
    scanf("%d", &number);
    while (number>0)
    {
        u=number%10;
        if(u%2==0){
            u=u;
        }else{
            u=u-1;
        }
        new_number=new_number+u*pow(10,i);
        number/=10;
        i++;
    }
    printf("%d", new_number);
}