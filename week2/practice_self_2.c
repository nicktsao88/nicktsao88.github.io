#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    {
        if (a < 0 || a>=10) {
            printf("超出範圍\n");
        }
        else if (a == 0) {
            printf("可悲，只有0\n");
        }
        else if (a > 0 && a < 3) {
            printf("1,2\n");
        }
        else if (a >= 3 && a < 6) {
            printf("3,4,5\n");
        }
        else if (a >= 6 && a <= 9) {
            printf("6,7,8,9\n");
        }
    }

}
