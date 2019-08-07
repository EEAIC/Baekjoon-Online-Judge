#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	if (N % 4 == 0 || N % 4 == 2) {
		cout << "CY";
	}
	else {
		cout << "SK";
	}

	return 0;
}