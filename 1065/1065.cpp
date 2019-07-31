#include <iostream>

using namespace std;

int main() {
	int N;
	int result;
	cin >> N;

	if (N < 100) {
		result = N;
	}
	
	else {
		result = 99;
		if (N == 1000) N = 999;
		for (int i = 100; i <= N; i++) {
			if (i / 100 == 2 * (i / 10 - i / 100 * 10) - i % 10)  result++;
		}
	}

	cout << result;
	return 0;
}