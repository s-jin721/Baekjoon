#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 10000001

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    int limit = (int)sqrt(B);
    int isPrime[MAX] = { 0,  };
    for (int i = 2; i < MAX; i++) isPrime[i] = 1;

    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            long long power = (long long)i * i;
            while (power <= B) {
                if (power >= A) count++;
                if (power > B / i) break;
                power *= i;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
