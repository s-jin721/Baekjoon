#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M, V;
int graph[10001][1001];
int visited1[10001] = { 0, };
int visited2[10001] = { 0, };
void DFS(int k) {
	int i;
	for (i = 1; i <= N; i++) {
		if (graph[k][i] == 1 && visited1[i] == 0) {
			visited1[i] = 1;
			printf("%d ", i);
			DFS(i);
		}
	}
}
void BFS(int k) {
	int i;
	int front =0, rear=0;
	int queue[10001];
	queue[rear++] = k;
	while (front < rear) {
		for (i = 1; i <= N; i++) {
			if (graph[queue[front]][i] == 1 && visited2[i] == 0) {
				queue[rear++] = i;
				visited2[i] = 1;
			}
		}
		printf("%d ", queue[front++]);
	}
}
int main() {
	int a, b;
	scanf("%d %d %d", &N, &M, &V);
	int i;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	visited1[V] = 1;
	printf("%d ", V);
	DFS(V);
	printf("\n");
	visited2[V] = 1;
	BFS(V);
}
