#include <stdio.h>

int main() {
    // ประกาศตัวแปรที่ใช้
    float x = 10.0, rate = 5.0;
    int y = 3, z = 2, a = 4;
    float total = 100.0, price = 20.0, quantity = 2.0, discount = 10.0;
    float score = 80.0, penalty = 2.0;
    int mistake = 1;

    // แบบย่อของแต่ละนิพจน์
    x -= 4.0; // แทน x = x - 4.0;
    x *= 6.5; // แทน x = 6.5 * x;
    x = (int)x % (y + z * a); // แปลง x เป็น int แล้วใช้ mod
    x /= (2.0 * x); // แทน x = x / (2.0 * x);
    total += (price * quantity - discount); // แทน total = total + (price * quantity - discount);
    x *= (1 + rate / 100); // แทน x = x * (1 + rate / 100);
    score -= (penalty * (mistake + 1)); // แทน score = score - (penalty * (mistake + 1));

    // แสดงผลลัพธ์ตัวอย่าง
    printf("x = %.2f\n", x);
    printf("total = %.2f\n", total);
    printf("score = %.2f\n", score);

    return 0;
}