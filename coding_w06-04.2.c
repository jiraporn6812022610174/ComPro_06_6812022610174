#include <stdio.h>

int main() {
    float x1 = 10.0, x2 = 10.0;
    x1 = x1 - 4.0;
    x2 -= 4.0;
    printf("1. x1=%.2f, x2=%.2f\n", x1, x2);

    x1 = x2 = 6.0;
    x1 = 6.5 * x1;
    x2 *= 6.5;
    printf("2. x1=%.2f, x2=%.2f\n", x1, x2);

    int y = 3, z = 2, a = 4;
    int i1 = (int)x1, i2 = (int)x2;
    i1 = i1 % (y + z * a);
    i2 %= (y + z * a);
    printf("3. i1=%d, i2=%d\n", i1, i2);

    x1 = x2 = 4.0;
    x1 = x1 / (2.0 * x1);
    x2 /= (2.0 * x2);
    printf("4. x1=%.2f, x2=%.2f\n", x1, x2);

    float total1 = 100.0, total2 = 100.0;
    float price = 20, quantity = 2, discount = 10;
    total1 = total1 + (price * quantity - discount);
    total2 += (price * quantity - discount);
    printf("5. total1=%.2f, total2=%.2f\n", total1, total2);

    float rate = 5.0;
    x1 = x2 = 20.0;
    x1 = x1 * (1 + rate / 100);
    x2 *= (1 + rate / 100);
    printf("6. x1=%.2f, x2=%.2f\n", x1, x2);

    float score1 = 80, score2 = 80;
    float penalty = 2.0;
    int mistake = 1;
    score1 = score1 - (penalty * (mistake + 1));
    score2 -= (penalty * (mistake + 1));
    printf("7. score1=%.2f, score2=%.2f\n", score1, score2);

    return 0;
}