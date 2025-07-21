#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char num[1000001];
    scanf("%s", num);

    int count = 0;

    int sum = 0;
    for (int i = 0; num[i]; i++) {
        sum += num[i] - '0';
    }

    if (strlen(num) > 1) count++;

    while (sum >= 10) {
        int temp = sum;
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        count++;
    }

    printf("%d\n", count);

    if (sum % 3 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
