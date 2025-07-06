#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int k = b - a;
		int d = (int)sqrt(k);

		if (d * d == k) {
			printf("%d\n", 2 * d - 1);
		}
		else if (k <= d * (d + 1)) {
			printf("%d\n", 2 * d);
		}
		else {
			printf("%d\n", 2 * d + 1);
		}
	}
	return 0;
}
