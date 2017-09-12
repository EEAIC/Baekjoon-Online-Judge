#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int Key[9];

int main() {
	int i,j;
	int tmp = 0;
	int tmp_i = 0;
	int tmp_j = 0;
	int Sum = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &Key[i]);
		Sum += Key[i];
	}
	for (i = 0; i < 9 - 1; i++) {
		for (j = 0; j < 9 - 1; j++) {
			if (Key[j] > Key[j + 1]) {
				tmp = Key[j];
				Key[j] = Key[j + 1];
				Key[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if ((Sum - Key[i] - Key[j]) == 100) {
				tmp_i = i;
				tmp_j = j;
				break;
			}
		}
		if (tmp_i != 0 || tmp_j != 0) {
			break;
		}
	}
	for (i = 0; i < 9; i++) {
		if (i != tmp_i && i != tmp_j) {
			printf("%d\n", Key[i]);
		}
	}
}





