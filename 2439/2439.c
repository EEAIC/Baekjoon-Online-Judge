#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	int i;
	int j;
	scanf("%d", &N);
	for (j = 0; j < N; j++) {
		for (i = 1; N - i > j; i++) {
			printf(" ");
		}
		for (i = 0; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}