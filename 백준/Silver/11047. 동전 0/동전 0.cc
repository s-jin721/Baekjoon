#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int i;
    int a[10];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    i = n - 1;
    int count = 0;
    while (k != 0) {
        while (a[i] <= k) {
            k -= a[i];
            count++;
        }
        i--;
    }
    printf("%d", count);
}
