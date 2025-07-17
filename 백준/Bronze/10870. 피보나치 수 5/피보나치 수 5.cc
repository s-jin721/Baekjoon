#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int f(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return f(n - 1)+ f(n-2);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int result;
	result = f(n);
	printf("%d\n", result);
}

