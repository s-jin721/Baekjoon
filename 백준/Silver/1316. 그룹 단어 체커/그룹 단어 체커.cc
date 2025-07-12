#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[100];
    int b[30];
    int i, j, c;
    int count = 0;
    char last = '\0';
    for (i = 0; i < n; i++){
        for (j = 0; j < 26; j++) {
            b[j] = 0;
        }
        scanf("%s", a);
        c = 0;
        last = '\0';
        while (a[c] != '\0') {
            if (b[a[c] - 'a'] && last != a[c]) {
                break;
            }
            b[a[c] - 'a']++;
            last = a[c];
            c++;
        }
        if (a[c] == '\0') {
            count++;
        }
    }
    printf("%d", count);
}
