#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100000

int main() {
    int n, s;
    int arr[MAX];
    scanf("%d %d", &n, &s);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = 0;
    int sum = 0;
    int minLen = n + 1;

    while (1) {
        if (sum >= s) {
            if (end - start < minLen) {
                minLen = end - start;
            }
            sum -= arr[start++];
        }
        else if (end == n) break;
        else {
            sum += arr[end++];
        }
    }

    if (minLen == n + 1) printf("0\n");
    else printf("%d\n", minLen);

    return 0;
}
