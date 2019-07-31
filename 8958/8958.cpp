#include <iostream>
#include <string>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		int rst = 0;
		int continuous = 1;
		string test;
		cin >> test;
		for (auto value : test) {
			if (value == 'O') {
				rst += continuous;
				continuous++;
			}
			else {
				continuous = 1;
			}
		}

		cout << rst;
		if (i != cases - 1) cout << endl;
	}
	return 0;
}