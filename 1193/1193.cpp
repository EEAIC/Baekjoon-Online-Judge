#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double X;
	cin >> X;

	int a = (int)floor(sqrt(2 * X)) - 1;
	while (!((a - 1) * a < 2 * X  && 2 * X <= a * (a + 1))) {
		a++;
	}

	if (a % 2) {
		cout << (a * a + a + 2) / 2 - X << '/' << (a + 1) - ((a * a + a + 2) / 2 - X);
	}
	else {
		cout << (a + 1) - ((a * a + a + 2) / 2 - X) << '/' << (a * a + a + 2) / 2 - X;
	}

	return 0;
}