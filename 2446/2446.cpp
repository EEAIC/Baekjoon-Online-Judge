#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int f1_cost = 0;
	int f2_cost = 0;
	cin >> N;

	for (int i = 2 * N - 1; i >= 0 * N; i--) {
		for (int j = 0; j < 2 * N; j++) {
			f1_cost = -j + 2 * N - 2 - i;
			f2_cost = j - i;
			if (i < N - 1) {
				if (f1_cost >= 0 && f2_cost >= 0) {
					cout << "*";
				}
				else {
					if (j < N) {
						cout << " ";
					}
					else {
						break;
					}
				}
			}
			else if (i == N - 1) {
				break;
			}
			else {
				if (f1_cost < 0 && f2_cost < 0) {
					cout << "*";
				}
				else {
					if (j < N) {
						cout << " ";
					}
					else {
						break;
					}
				}
			}
		}
		if (i != 0 && i != N - 1) {
			cout << endl;
		}
	}

	return 0;
}