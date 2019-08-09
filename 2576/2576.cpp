#include <iostream>

using namespace std;

int main() {
	int tmp;
	int sum = 0;
	int min = 100;

	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2) {
			sum += tmp;
			if (min > tmp) {
				min = tmp;
			}
		}
	}

	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n";
		cout << min;
	}

}