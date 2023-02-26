//4.	Write program to delete the last k digits. input 23617 and k=3 output 23. k=2, 236
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int k;
    scanf("%d", &k);
    while (k--)
    {
        number=number/10;
    }
    printf("%d", number);
    
}