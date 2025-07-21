#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if ((n - 1) % 4 == 0 || (n - 1) % 4 ==2) {
        printf("CY\n");
    }
    else {
        printf("SK\n");
    }

    return 0;
}
