//49.	Write a program, which reads two integers a and b and outputs a/b correct to 5 places of decimal. The program should not use any float variable or “%f”. (assume a<b) 

#include <stdio.h>

int main() {
    int a, b, quotient, i;
    
    printf("Enter two integers (a<b): ");
    scanf("%d%d", &a, &b);
    
    printf("Result: %d.", a/b);  
    
    quotient = a % b;  
    
    for (i = 0; i < 5; i++) {  
        quotient *= 10;
        printf("%d", quotient/b);
        quotient %= b;
    }
    
    printf("\n");
    
    return 0;
}
