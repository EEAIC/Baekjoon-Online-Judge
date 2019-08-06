#include <iostream>
#include <string>

using namespace std;

int main() {
	int T, rst;
	cin >> T;
	string A, B;
	for (int i = 0; i < T; i++) {
		rst = 0;
		cin >> A >> B;

		for (unsigned int i = 0; i < A.size(); i++) {
			if (A.at(i) != B.at(i)) {
				rst += 1;
			}
		}

		cout << "Hamming distance is " << rst << ".\n";
	}

	return 0;
}