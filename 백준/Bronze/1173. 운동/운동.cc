#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, M, T, R;
	scanf("%d %d %d %d %d", &n, &m, &M, &T, &R);
	int count = 0, min = 0;
	int X = m;
	if (X + T > M) {
		printf("-1");
	}
	else {
		while (1) {
			while (X + T <= M) {
				count++;
				min++;
				X += T;
				if (count == n) {
					printf("%d", min);
					return 0;
				}
			}
			while (X + T > M) {
				min++;
				X -= R;
			}
			if (X < m) {
				X = m;
			}
		}
	}
}