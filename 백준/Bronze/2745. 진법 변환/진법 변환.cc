#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int n;
    scanf("%s", a);
    scanf("%d", &n);

    int len = strlen(a);
    int result = 0;
    int k = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            result += (a[i] - 'A' + 10) * k;
        }
        else {
            result += (a[i] - '0') * k;
        }
        k *= n;
    }

    printf("%d", result);
    return 0;
}
