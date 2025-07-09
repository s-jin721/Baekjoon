#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int net[101][101];
int com[101] = { 0, };
int n, m;
int count = 0;
void virus(int k){
	int i;
	for (i = 1; i <= n; i++) {
		if (net[k][i] == 1 && com[i] == 0) {
			com[i] = 1;
			count++;
			//printf("%d", i);
			virus(i);
		}
	}
}
int main() {
	int a, b;
	scanf("%d %d", &n, &m);
	com[1] = 1;
	int i;
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		net[a][b] = 1;
		net[b][a] = 1;
	}
	virus(1);
	printf("%d", count);

}