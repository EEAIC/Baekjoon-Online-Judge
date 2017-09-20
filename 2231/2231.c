#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int t_Const = 0;
int main() {
	int Min = 1000054;
	int N;
	int tmp;
	int Min_tmp = 1000000;
	int digitNum = 0;
	int i;
	scanf("%d", &N);
	tmp = N;
	for (i = 0; i < 7; i++) {
		if ((int)pow(10, i) <= N && N < (int)pow(10, i + 1)) {
			digitNum = i + 1;
			break;
		}
	}
	for (tmp = N;tmp > N/10; tmp--) {
		t_Const = 0;
		for (i = 0; i < digitNum; i++) {
			t_Const += tmp % ((int)pow(10, i + 1)) / (int)pow(10, i);
		}
		t_Const += tmp;
		if (N == t_Const) {
			if (Min_tmp > tmp) {
				Min = t_Const;
				Min_tmp = tmp;
			}
		}
	}
	if (N != Min) {
		Min_tmp = 0;
	}
	printf("%d\n", Min_tmp);
}
