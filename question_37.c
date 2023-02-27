//37.	Write a program to delete first kth digits e.g. input 23617 and k=2 output 617.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, k;
    char num_str[20];  
    char result[20];   

    scanf("%d", &num);
    scanf("%d", &k);

    sprintf(num_str, "%d", num);
    strcpy(result, num_str + k);

    printf("Result: %s\n", result);
    return 0;
}
