#include <stdio.h>
#include <stdlib.h>
long long fibo_Zero(int n);
long long fibo_One(int n);
long long dp[41][2];
int main() {
	int i, j;
	int Num;
	int digit;
	scanf("%d", &Num);
	for (i = 0; i < 41; i++) {
		for (j = 0; j < 2; j++) {
			dp[i][j] = -1;
		}
	}
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	for (i = 0; i < Num; i++) {
		scanf("%d", &digit);
		printf("%lld %lld\n", fibo_Zero(digit), fibo_One(digit));
	}
	return 0;
}

long long fibo_Zero(int n) {
	if (dp[n][0] != -1) {
		return dp[n][0];
	}
	else {
		dp[n][0] = fibo_Zero(n - 1) + fibo_Zero(n - 2);
		return dp[n][0];
	}
}

long long fibo_One(int n) {
	if (dp[n][1] != -1) {
		return dp[n][1];
	}
	else {
		dp[n][1] = fibo_One(n - 1) + fibo_One(n - 2);
		return dp[n][1];
	}
}