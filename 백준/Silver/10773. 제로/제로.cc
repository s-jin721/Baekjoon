#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[100000];
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			j = i - 1;
			while (a[j]==0) {
				j--;
			}
			a[j] = 0;
		}
	}
	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("%d", sum);
}
