//46.	Write a program, which reads a float number and an integer k and prints number by adding 1 to the first k digits. If input is 0.241573 and k is 4 then output is 0.352673. Assume that given number is between 0 and 1.

#include <stdio.h>

int main() {
    float num, result = 0.0;
    int k, i = 0;
    
    scanf("%f", &num);
    scanf("%d", &k);
    
    while (i < k) {
        num *= 10.0;
        result = result * 10.0 + ((int)num + 1) % 10;
        num -= (int)num;
        i++;
    }
    
    result /= 10000.0;
    result += num;
    
    printf(" %f ", result);
    
    return 0;
}
