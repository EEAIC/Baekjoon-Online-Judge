#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < 2 * (N - i - 2) + 1; j++) {
			cout << " ";
		}

		if (i != N - 1)	cout << "*";
		cout << "\n";
	}
	return 0;
}