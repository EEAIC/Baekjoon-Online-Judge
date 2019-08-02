#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double N;
	int a;
	cin >> N;
	if (N == 1) {
		a = 1;
	}
	else {
		a = (int)floor(sqrt((N - 1) / 3));
		while(!((a - 2) * (a - 1) < (N - 1) / 3 && (N - 1) / 3 <= a * (a - 1)))
		{
			a++;
		}
	}

	cout << a;
	return 0;
}