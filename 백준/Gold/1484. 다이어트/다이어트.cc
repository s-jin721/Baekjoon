#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int G;
    scanf("%d", &G);

    int start = 1;
    int end = 2;
    int found = 0;

    while (start < end) {
        long long diff = (long long)end * end - (long long)start * start;
        if (diff == G) {
            printf("%d\n", end);
            found = 1;
            end++;
        } else if (diff < G) {
            end++;
        } else {
            start++;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
