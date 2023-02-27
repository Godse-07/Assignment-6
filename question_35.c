//35.	Write a program to delete the kth digit from last. e.g. input 23617 and k=4 output 2617.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, k;
    char num_str[20];  
    char result[20];   

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the position of the digit to delete from the end: ");
    scanf("%d", &k);

    sprintf(num_str, "%d", num);

    int len = strlen(num_str);
    strncpy(result, num_str, len - k);      
    strncpy(result + len - k, num_str + len - k + 1, k);  

    printf("Result: %s\n", result);
    return 0;
}
