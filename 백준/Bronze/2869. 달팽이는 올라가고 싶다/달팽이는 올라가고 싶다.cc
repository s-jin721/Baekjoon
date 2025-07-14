#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int days = (int)ceil((double)(v - a) / (a - b)) + 1;

    printf("%d\n", days);
    return 0;
}
