//5.	Write program to print the kth digit from last. input 23617 and k=4 output 3. k=2, 1
#include<stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    int k;
    scanf("%d", &k);
    while (k-->1)
    {
        number=number/10;
    }
    printf("%d", number%10);
    
}