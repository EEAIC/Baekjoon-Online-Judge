#include <iostream>

using namespace std;

int main() {
	int LCM;
	int A, B;
	cin >> A >> B;
	LCM = A * B;
	if (A < B) swap(A, B);
	while (B != 0) {
		A = A % B;
		swap(A, B);
	}

	cout << A << "\n";
	cout << LCM / A;

	return 0;
}