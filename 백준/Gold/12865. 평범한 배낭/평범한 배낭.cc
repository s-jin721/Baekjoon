#include <stdio.h>
int dp[100001];
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        int w, v;
        scanf("%d %d", &w, &v);

        for (int j = K; j >= w; j--) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    printf("%d\n", dp[K]);
    return 0;
}
