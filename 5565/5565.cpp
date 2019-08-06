#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int total;
	cin >> total;
	int tmp;
	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		total -= tmp;
	}

	cout << total;

	return 0;
}