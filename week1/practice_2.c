#include <stdio.h>

int main() {
    int sorce_chinese = 0;
    int sorce_math = 0;
    float sum = 0;
    float average = 0.0;

    printf("請輸入國文分數：");
    scanf_s("%d", &sorce_chinese);
    printf("請輸入數學成績：");
    scanf_s("%d", &sorce_math);
    sum = sorce_math + sorce_chinese;
    average = sum / 2;
    printf("國文：%d\n", sorce_chinese);
    printf("數學：%d\n", sorce_math);
    printf("總分：%.0f\n", sum);
    printf("平均：%.2f\n", average);

}
