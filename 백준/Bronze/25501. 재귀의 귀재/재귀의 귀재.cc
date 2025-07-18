#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<string.h>
int count;
int recursion(const char* s, int l, int r) {
	count++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	char a[1001];
	int i;
	for (i = 0; i < n; i++) {
		count = 0;
		scanf("%s", &a);
		printf("%d", isPalindrome(a));
		printf(" %d\n", count);
	}
}

