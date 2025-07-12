#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int E, S, M;
    int min, c;
    scanf("%d %d %d", &E, &S, &M);
    while (E != S || S != M || E != M) {
        min = E;
        c = 0;
        if (min > S) {
            min = S;
            c = 1;
        }
        if (min > M) {
            min = S;
            c = 2;
        }
        if (c % 3 == 0) {
            E += 15;
        }
        if (c % 3 == 1) {
            S += 28;
        }
        if (c % 3 == 2) {
            M += 19;
        }
    }
    printf("%d", E);
    return 0;
}
