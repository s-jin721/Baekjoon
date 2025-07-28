#include <stdio.h>

int main() {
    int n;
    int arr[51];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("A\n");
        return 0;
    }

    if (n == 2) {
        if (arr[0] == arr[1]) {
            printf("%d\n", arr[0]);
        } else {
            printf("A\n");
        }
        return 0;
    }

    int a, b;
    int x0 = arr[0], x1 = arr[1], x2 = arr[2];

    if ((x1 - x0) == 0) {
        if (x1 != x2) {
            printf("B\n");
            return 0;
        } else {
            a = 0;
            b = x1;
        }
    } else if ((x2 - x1) % (x1 - x0) != 0) {
        printf("B\n");
        return 0;
    } else {
        a = (x2 - x1) / (x1 - x0);
        b = x1 - x0 * a;
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1] * a + b) {
            printf("B\n");
            return 0;
        }
    }

    int next = arr[n - 1] * a + b;
    printf("%d\n", next);
    return 0;
}
