#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int T,rst;
	string::iterator it;
	string input;
	cin >> T;
	for (int i = 0; i < T; i++) {
		rst = 0;
		cin >> input;
		sort(input.begin(), input.end());
		auto ip = unique(input.begin(), input.end());
		for (it = input.begin(); it != ip; ++it) {
			rst += (int)*it;
		}

		cout << 2015 - rst << "\n";
	}
}