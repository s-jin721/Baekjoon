#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
long long f(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * f(n - 1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	long long result;
	result = f(n);
	printf("%lld\n", result);
}

