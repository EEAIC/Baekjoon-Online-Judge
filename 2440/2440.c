#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0;
	int i;
	int j;
	scanf("%d", &N);
	for (j = 0; j < N; j++) {
		for (i = N; i > j; i--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}