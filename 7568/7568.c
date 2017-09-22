#define CRT_SECURE_NO_WARNINGS
#define Weight 0
#define Height 1
#define Place 2
#include <stdio.h>

int main() {
	int People[50][3] = { 0 };
	int Num;
	int i, j;
	scanf("%d", &Num);
	for (i = 0; i < Num; i++) {
		scanf("%d %d", &People[i][Weight], &People[i][Height]);
	}
	for (i = 0; i < Num; i++) {
		for (j = 0; j < Num; j++) {
			if (People[j][Weight] == 0) {
				break;
			}
			else if ((People[j][Weight] > People[i][Weight]) && (People[j][Height] > People[i][Height])) {
				People[i][Place] += 1;
			}
		}
	}
	for (i = 0; i < Num; i++) {
		if (i == Num - 1) {
			printf("%d\n", ++People[i][Place]);
		}
		else {
			printf("%d ", ++People[i][Place]);
		}
	}
}