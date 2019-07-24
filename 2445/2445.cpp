#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int f1_cost = 0;
	int f2_cost = 0;
	cin >> N;

	for (int i = 2 * N - 2; i >= 0 * N; i--) {
		for (int j = 0; j < 2 * N; j++) {
			f1_cost = -j + 2 * N - 2 - i;
			f2_cost = j - i;
			if (j < N) {
				if (f1_cost >= 0 && f2_cost <= 0) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			else {
				if (f1_cost < 0 && f2_cost > 0) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		if (i != 0) {
			cout << endl;
		}
	}

	return 0;
}