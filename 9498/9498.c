#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Score = 0;
	scanf("%d", &Score);
	if (Score >= 90) {
		printf("A\n");
	}
	else if (90 > Score && Score >= 80) {
		printf("B\n");
	}
	else if (80 > Score && Score >= 70) {
		printf("C\n");
	}
	else if (70 > Score && Score >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}
	return 0;
}