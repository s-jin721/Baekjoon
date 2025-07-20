#include <stdio.h>

long long combination(int n, int r) {
    if (r == 0 || n == r) return 1;

    long long result = 1;
    int i;


    for (i = 1; i <= r; i++) {
        result *= (n - r + i);
        result /= i;
    }

    return result;
}

int main() {
    int T;
    scanf("%d", &T);
    int i;
    
    for(i=0; i<T; i++){
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%lld\n", combination(M, N));
    }

    return 0;
}
