#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	int A, B, tmp, rst;	
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		rst = A * B;
		if (A < B) {
			swap(A, B);
		}

		while (B != 0) {
			tmp = B;
			B = A % B;
			A = tmp;
		}

		cout << rst / A << "\n";
	}

	return 0;
}