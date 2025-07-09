#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h, m, n;
	scanf("%d %d\n%d", &h, &m, &n);
	printf("%d %d", (h + (n + m) / 60)%24, (n + m) % 60);
}