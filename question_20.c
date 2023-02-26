// 20.	Write a program to print the second last even digit. e.g. input 23863 output 8 (do not use ‘if’). Input 325145761 output 4. [Hint: use two loops]
#include <stdio.h>
void main()
{
    int x, y = 0;
    scanf("%d", &x);
    while (1) {
        while (x % 2 == 0 && x > 0) {
            x = x / 10;
            while (x % 2 == 0 && x > 0) {
                y = x % 10;
                printf("%d\n", y);
                break;
            }
        }
        if (x <= 0) {
            break;
        }
        x = x / 10;
    }
}