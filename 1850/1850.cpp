#include <iostream>

using namespace std;

int main() {
	long long int A, B, tmp;
	cin >> A >> B;
	if (A < B) swap(A, B);
	while (B) {
		tmp = B;
		B = A % B;
		A = tmp;
	}

	for (long long int i = 0; i < A; i++) {
		cout << 1;
	}
}