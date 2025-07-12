#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int n) {
    if (n < 100) return 1;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int diff = d2 - d1;

    n /= 10;
    while (n >= 10) {
        d1 = n % 10;
        d2 = (n / 10) % 10;
        if (d2 - d1 != diff) return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (f(i)) count++;
    }

    printf("%d", count);
    return 0;
}
