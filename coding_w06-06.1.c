#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    int r1 = a++ * b + (int)y % 3;
    printf("r1 = %d (a after r1 = %d)\n", r1, a);

    int r2 = (a > b) && ((int)x / b < 2);
    printf("r2 = %d\n", r2);

    float r3 = ++x * y - a / 2;
    printf("r3 = %.2f (x after r3 = %.2f)\n", r3, x);

    float r4 = ((x += 1.5) > y) || (b-- > 0);
    printf("r4 = %.0f (x after r4 = %.2f, b after r4 = %d)\n", r4, x, b);

    return 0;
}