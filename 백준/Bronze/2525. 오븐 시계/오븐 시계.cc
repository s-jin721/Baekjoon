#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h, m;
	int n;
	scanf("%d %d", &h, &m);
	scanf("%d", &n);
	printf("%d %d", (h + (n + m) / 60)%24, (n + m) % 60);
}
