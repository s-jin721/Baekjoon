#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int T;
	char VPS[50];
	int i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%s", VPS);
		j = 0;
		int top=0;
		char stack[50];
		int check;
		while (VPS[j] != '\0') {
			if (VPS[j] == '(') {
				stack[top++] = VPS[j];
			}
			else if(stack[top-1] == '(') {
				stack[--top] = '\0';
			}
			else {
				check = 0;
				top = -1;
				break;
			}
			j++;
		}
		if (top == 0) {
			check = 1;
		}
		else {
			check = 0;
		}
		if (check) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}