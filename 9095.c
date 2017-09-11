#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Cnt;
int Find(int Num);

int main() {
	int Num = 0;
	int loop = 0;
	int Num_rst = 0;
	int Num_loop = 0;
	scanf("%d", &Num_loop);
	for (loop = 0; loop < Num_loop; loop++) {
		scanf("%d", &Num);
		Cnt = 0;
		if (Num > 0) {
			Num_rst = Find(Num);
		}
		else {
			Num_rst = 0;
		}
		printf("%d\n", Num_rst);
	}
}

int Find(int Num) {
	if (Num > 3) {
		Find(Num - 3);
		Find(Num - 2);
		Find(Num - 1);
		return Cnt;
	}
	else if (Num == 3) {
		Cnt++;
		Find(Num - 2);
		Find(Num - 1);
		return Cnt;
	}
	else if (Num == 2) {
		Cnt++;
		Find(Num - 1);
		return Cnt;
	}
	else if (Num == 1) {
		Cnt++;
		return Cnt;
	}
	else {
		return Cnt;
	}
}