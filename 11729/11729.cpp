#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>


void move_hanoi(int N, int from_pos, int to_pos);

int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", (int)pow(2, N) - 1);
	move_hanoi(N, 1, 3);
	
	return 0;
}

void move_hanoi(int N, int from_pos, int to_pos) {
	if (N == 1){
		printf("%d %d\n", from_pos, to_pos);
	}
	else {
		move_hanoi(N - 1, from_pos, 6 - to_pos - from_pos);
		printf("%d %d\n", from_pos, to_pos);
		move_hanoi(N - 1, 6 - to_pos - from_pos, to_pos);
	}
}