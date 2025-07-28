#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define INF 1000000000
#define MAX 101

typedef struct {
    int from, to, cost;
} Edge;

Edge edges[10001];
long long dist[MAX];
int earn[MAX];
int N, M, a, b;

int visited[MAX] = { 0 };
int adj[MAX][MAX] = { 0 };

void dfs(int node) {
    visited[node] = 1;
    for (int i = 0; i < N; i++) {
        if (adj[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    scanf("%d %d %d %d", &N, &a, &b, &M);

    for (int i = 0; i < M; i++) {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        edges[i].from = u;
        edges[i].to = v;
        edges[i].cost = c;
        adj[u][v] = 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &earn[i]);
        dist[i] = -INF;
    }

    dist[a] = earn[a];

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M; j++) {
            int u = edges[j].from;
            int v = edges[j].to;
            int cost = edges[j].cost;

            if (dist[u] == -INF) continue;

            if (dist[v] < dist[u] - cost + earn[v]) {
                dist[v] = dist[u] - cost + earn[v];
            }
        }
    }

    for (int j = 0; j < M; j++) {
        int u = edges[j].from;
        int v = edges[j].to;
        int cost = edges[j].cost;

        if (dist[u] == -INF) continue;

        if (dist[v] < dist[u] - cost + earn[v]) {
            for (int i = 0; i < N; i++) visited[i] = 0;
            dfs(v);
            if (visited[b]) {
                printf("Gee\n");
                return 0;
            }
        }
    }

    if (dist[b] == -INF) {
        printf("gg\n");
    } else {
        printf("%lld\n", dist[b]);
    }

    return 0;
}
