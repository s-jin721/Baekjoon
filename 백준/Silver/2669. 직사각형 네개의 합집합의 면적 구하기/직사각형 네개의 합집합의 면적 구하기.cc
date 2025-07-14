#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[101][101] = { 0, };
	int i, j, k;
	int x1, y1, x2, y2;
	for (k = 0; k < 4; k++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = x1; i < x2; i++) {
			for (j = y1; j < y2; j++) {
				a[i][j] = 1;
			}
		}
	}
	int count = 0;
	for (i = 1; i <= 100; i++) {
		for (j = 1; j <= 100; j++) {
			if (a[i][j] == 1) {
				count++;
			}
		}
	}
	printf("%d", count);
}
