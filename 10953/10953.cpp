#include <iostream>

using namespace std;

int main() {
	int A, B, T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A;
		cin.ignore();
		cin >> B;
		cout << A + B << "\n";
	}
	
	return 0;
}