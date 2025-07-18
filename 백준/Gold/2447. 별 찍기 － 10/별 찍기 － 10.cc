#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<string.h>
char a[6562][6562];
void f(int sx, int sy, int n) {
    int mid = n / 3;
    for (int i = sx + mid; i < sx + 2 * mid; i++) {
        for (int j = sy + mid; j < sy + 2 * mid; j++) {
            a[i][j] = ' ';
        }
    }
    if (n == 3) {
        return ;
    }
    for (int i = sx; i < sx + 3 * mid; i += mid) {
        for (int j = sy; j < sy + 3 * mid; j += mid) {
            f(i, j, n / 3);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = '*';
        }
    }
    f(0, 0, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}