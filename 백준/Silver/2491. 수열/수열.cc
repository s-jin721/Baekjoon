#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int inc[N];
    int dec[N];

    inc[0] = 1;
    dec[0] = 1;

    int max_len = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] >= arr[i-1])
            inc[i] = inc[i-1] + 1;
        else
            inc[i] = 1;

        if (arr[i] <= arr[i-1])
            dec[i] = dec[i-1] + 1;
        else
            dec[i] = 1;

        if (inc[i] > max_len) max_len = inc[i];
        if (dec[i] > max_len) max_len = dec[i];
    }

    printf("%d\n", max_len);

    return 0;
}
