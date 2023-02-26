// 12.	Write a program to print positional values of digits of a number. Input 21463 output 3, 60, 400, 1000 and 20000. Input 451 outputs 1, 50 and 400.
#include <stdio.h>
void main()
{
    int x, m = 0, n = 1;
    scanf("%d", &x);
    while (x > 0)
    {
        m = x % 10;
        m = m * n;
        printf("%d,", m);
        n = n * 10;
        x = x / 10;
    }
}