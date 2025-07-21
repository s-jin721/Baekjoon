#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    if ((n) % 4 == 0 || (n) % 4 ==2) {
        printf("CY\n");
    }
    else {
        printf("SK\n");
    }

    return 0;
}
