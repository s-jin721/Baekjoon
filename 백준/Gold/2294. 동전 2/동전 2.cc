#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INF 10001
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int coin[100];
    int dp[10001];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }

    for (int i = 1; i <= k; i++) {
        dp[i] = INF;
    }
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = coin[i]; j <= k; j++) {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }

    if (dp[k] == INF)
        printf("-1\n");
    else
        printf("%d\n", dp[k]);

    return 0;
}
