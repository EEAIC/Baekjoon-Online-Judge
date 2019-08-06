#include <iostream>
#include <string>

using namespace std;

int main() {
	int rst = 10;
	string N;
	cin >> N;
	for (unsigned int i = 1; i < N.size(); i++) {
		if (N.at(i - 1) == N.at(i)) rst += 5;
		else {
			rst += 10;
		}
	}

	cout << rst;

	return 0;
}
