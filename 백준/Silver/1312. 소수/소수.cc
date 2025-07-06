#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A, B, N;
	scanf("%d %d %d", &A, &B, &N);
	A = A - (A / B)*B;
	int count=0;
	int k;
	while (count < N) {
		A *= 10;
		k = (A / B);
		A = A - (k)*B;
		count++;
	}
	printf("%d", k);
}