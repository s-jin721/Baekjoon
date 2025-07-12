#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    int a=0, b=-1;
    for (i = 0; i <= n / 5; i++) {
        for (j = 0; j <= n / 3; j++) {
            if (i * 5 + j * 3 == n) {
                a = i;
                b = j;
            }
        }
    }
    printf("%d", a + b);
    return 0;
}
