#include <stdio.h>
#include <math.h> // ต้องเพิ่มเพื่อใช้ fmod()

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าตัวแปร
    printf("a = %d, b = %d, c = %.2f, d = %.2f\n", a, b, c, d);

    // 2 - 8
    printf("d + a = %.2f\n", d + a);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a * c = %.2f\n", a * c);
    printf("c / d = %.2f\n", c / d);
    printf("b / c = %.2f\n", b / c);
    printf("a %% b = %d\n", a % b);

    // 9. ใช้ fmod แทน c % a
    printf("c %% a = %.2f\n", fmod(c, a)); // เหมือน 8.5 % 5 = 3.5

    // 10. ใช้ fmod แทน c % d
    printf("c %% d = %.2f\n", fmod(c, d)); // เหมือน 8.5 % 4.0 = 0.5

    return 0;
}

/*
สรุป:
- fmod(x, y) ใช้แทน x % y ถ้า x, y เป็น float/double
- ข้อ 9 เดิมใช้ c % a → error เพราะ float
- ข้อ 10 เดิมใช้ c % d → error เพราะ float
- ใช้ fmod แทนแล้วโปรแกรมรันผ่าน ปลอดภัย
*/