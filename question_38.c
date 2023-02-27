//38.	Write a program, which reads a number the finds special sum. If number is 2314 then output is 4 + 14 + 314 + 2314 = 2646. If input number is 223 then output is 3 + 23 + 223 = 249. If input is 12564 then output is 4 + 64 + 564 + 2564 + 12564 = 15760.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num_str[20];  
    int n, i, j, num, total = 0;

    scanf("%s", num_str);
    n = strlen(num_str);
    for (i = 0; i < n; i++) {
        num = 0;
        for (j = i; j < n; j++) {
            num = num * 10 + (num_str[j] - '0');  
        }
        total += num;  
    }
    printf("%d", total);
    return 0;
}
