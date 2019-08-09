#include <iostream>

using namespace std;

int main() {
	int T,Tmp;
	int N = 1;
	int rst = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> Tmp;
		if (Tmp) {
			rst += N;
			N++;
		}
		else {
			if (N != 1) {
				N = 1;
			}
		}
	}

	cout << rst;
}