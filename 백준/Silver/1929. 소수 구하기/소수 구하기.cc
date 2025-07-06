#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int a[1000000] = { 0, };
	int i, j;
	for (i = 2; i <= sqrt(n); i++) {
		if (a[i] == 0) {
			for (j = i * 2; j <= n; j += i) {
				a[j] = 1;
			}
		}
	}
	for (i = m; i <= n; i++) {
		if (a[i] == 0 && i!=1) {
			printf("%d\n", i);
		}
	}
}