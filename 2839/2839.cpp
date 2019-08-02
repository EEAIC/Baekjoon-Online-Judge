#include <iostream>

using namespace std;

int get_least_bag(int N) {
	for (int i = 0; i <= N / 3; i++) {
		for (int j = N / 5; j >= 0; j--) {
			if (N == 5 * j + 3 * i) {
				return j + i;
			}
		}
	}
	return -1;
}

int main() {
	int N;
	cin >> N;
	cout << get_least_bag(N);	
	return 0;
}