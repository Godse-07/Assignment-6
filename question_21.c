//21.	Read a number. Do half of number after last odd digit of that number. Then result is multiplied by 3 as output.  Input 61389426 output 184167639 (61389213*3). Input 87 output 261. Input 78 output 222 (74*3).
#include <stdio.h>
#include <math.h>

int main() {
    int x, y, count = 0, z = 0;
    scanf("%d", &x);
    while (x > 0) {
        y = x % 10;
        if (y % 2 != 0) {
            break;
        }
        x = x / 10;
        z = z + y * pow(10, count);
        count++;
    }
    z = z / 2;
    x = x * pow(10, count);
    x = (x + z) * 3;
    printf("%d\n", x);
    return 0;
}
