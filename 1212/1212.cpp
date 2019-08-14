#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
	string N;
	string::iterator it;
	cin >> N;
	it = N.begin();
	if (*it - '0' >= 4) {
		cout << bitset<3>(*it - '0');

	}
	else if (*it - '0' >= 2) {
		cout << bitset<2>(*it - '0');

	}
	else {
		cout << bitset<1>(*it - '0');
	}

	for (it += 1; it != N.end(); ++it) {
		cout << bitset<3>(*it - '0');
	}

	return 0;
}