#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	int i;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return 0;
}