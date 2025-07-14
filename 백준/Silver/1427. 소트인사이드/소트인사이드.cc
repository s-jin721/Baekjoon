#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[100000], i=0;
	while (n != 0) {
		a[i] = n % 10;
		n /= 10;
		i++;
	}
	int l = i;
	int j, temp;
	for (i = 0; i < l; i++) {
		for (j = i + 1; j < l; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < l; i++) {
		printf("%d", a[i]);
	}
}
