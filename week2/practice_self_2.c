#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    char cal;
    scanf("%d%d",&a,&b);
    scanf("%c",&cal);
    if (cal == '+') {
        printf("%d", a + b);
    }
    else if (cal == '-') {
        printf("%d",a-b);
    }
    else if (cal == '*') {
        printf("%d", a * b);
    }
    else if (cal == '/') {
        printf("%d", a / b);
    }
    else if (cal == '%') {
        printf("%d", a % b);
    }
    

}
