#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[11] = { 0 , };
    int p;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p);

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == 0) {
                if (count == p) {
                    a[j] = i;
                    break;
                }
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
