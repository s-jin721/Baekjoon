#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<string.h>
void cantor(char* arr, int start, int end) {
    if (end - start < 3) return;

    int third = (end - start) / 3;
    for (int i = start + third; i < start + 2 * third; i++) {
        arr[i] = ' ';
    }

    cantor(arr, start, start + third);
    cantor(arr, start + 2 * third, end);
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int length = 1;
        for (int i = 0; i < n; i++) length *= 3;

        char a[531442];
        for (int i = 0; i < length; i++) {
            a[i] = '-';
        }
        a[length] = '\0';

        cantor(a, 0, length);

        printf("%s\n", a);
    }
    return 0;
}