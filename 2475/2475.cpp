#include <iostream>

using namespace std;

int main() {
	int N[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> N[i];
	}

	for (auto n : N) {
		sum += n * n;
	}

	cout << sum % 10;
	
	return 0;
}