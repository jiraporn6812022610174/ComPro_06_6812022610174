#include <stdio.h>

int main() {
int x = 12, y = 7, z = 12;

// แสดงผลลัพธ์ของแต่ละนิพจน์
printf("1. x > y = %d\n", x > y); // 1
printf("2. x < z = %d\n", x < z); // 0
printf("3. x == z = %d\n", x == z); // 1
printf("4. x != y = %d\n", x != y); // 1
printf("5. !(2*5 >= y) || (5 != (5/3)) = %d\n", !(2*5 >= y) || (5 != (5/3))); // 1
printf("6. !(x < y) = %d\n", !(x < y)); // 1
printf("7. (x + y) > (z * 2) = %d\n", (x + y) > (z * 2)); // 0
printf("8. (x %% 2 == 0) || (y %% 2 == 1) = %d\n", (x % 2 == 0) || (y % 2 == 1)); // 1
printf("9. (x > y) && (z < y) = %d\n", (x > y) && (z < y)); // 0

return 0;
}