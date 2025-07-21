#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long result = (a * b) / gcd(a, b);
    printf("%lld\n", result);

    return 0;
}
