#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int i, j, l;
    int a[301][301];
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= M; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int K;
    int x1, y1;
    int x2, y2;
    int sum;
    scanf("%d", &K);
    for (l = 0; l < K; l++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sum = 0;
        for (i = x1; i <= x2; i++) {
            for (j = y1; j <= y2; j++) {
                sum += a[i][j];
            }
        }
        printf("%d\n", sum);
    }
}
