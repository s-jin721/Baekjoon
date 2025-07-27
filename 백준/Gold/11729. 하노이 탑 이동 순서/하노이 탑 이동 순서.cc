#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cmath>

void hanoi(int n, int from, int to, int via) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }
    hanoi(n - 1, from, via, to);
    printf("%d %d\n", from, to);
    hanoi(n - 1, via, to, from);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%lld\n", (long long)pow(2, n) - 1);
    hanoi(n, 1, 3, 2);
    return 0;
}
