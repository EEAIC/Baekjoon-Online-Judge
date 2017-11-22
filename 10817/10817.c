#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define min(a, b)  (((a) <= (b)) ? (a) : (b))
#define max(a, b)  (((a) >= (b)) ? (a) : (b))

int main() {
	int A[3] = { 0 };
	int tmp = 0;
	scanf("%d %d %d", &A[0], &A[1], &A[2]);
	tmp = max(max(A[0], A[1]), A[2]);
	for (int i = 0; i < 3; i++) {
		if (A[i] == tmp) {
			A[i] = -1;
			break;
		}
	}
	printf("%d\n", max(max(A[0], A[1]), A[2]));

	return 0;
}