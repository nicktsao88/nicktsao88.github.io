#include <stdio.h>

int main() {
    float a = 0;
    float b = 0;
    
    printf("請輸入變數1：");
    scanf_s("%f", &a);
    printf("請輸入變數2：");
    scanf_s("%f", &b);
    printf("相加：%.2f\n", a + b);
    printf("相減：%.2f\n", a - b);
    printf("相乘：%.2f\n", a * b);
    printf("相除：%.2f", a / b);

}
