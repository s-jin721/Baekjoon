#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 1001
#define INF 100000000

int N, M;
int cost[MAX][MAX];
int dist[MAX];
int visited[MAX];

void dijkstra(int start) {
    for (int i = 1; i <= N; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[start] = 0;

    for (int i = 1; i <= N; i++) {
        int min = INF;
        int u = -1;

        for (int j = 1; j <= N; j++) {
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        if (u == -1) break;

        visited[u] = 1;

        for (int v = 1; v <= N; v++) {
            if (!visited[v] && cost[u][v] != INF && dist[v] > dist[u] + cost[u][v]) {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }
}

int main() {
    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j) cost[i][j] = 0;
            else cost[i][j] = INF;
        }
    }

    for (int i = 0; i < M; i++) {
        int from, to, c;
        scanf("%d %d %d", &from, &to, &c);
        if (cost[from][to] > c) {
            cost[from][to] = c;
        }
    }

    int start, end;
    scanf("%d %d", &start, &end);

    dijkstra(start);

    if (dist[end] == INF) printf("도달 불가능\n");
    else printf("%d\n", dist[end]);

    return 0;
}
