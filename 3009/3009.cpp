#include <iostream>

using namespace std;

int get_unpair(int *X) {
	if (X[0] == X[1])
		return X[2];
	else if (X[1] == X[2])
		return X[0];
	else
		return X[1];
}

int main() {
	int X[3] = { 0, };
	int Y[3] = { 0, };

	for (int i = 0; i < 3; i++) {
		cin >> X[i] >> Y[i];
	}

	cout << get_unpair(X) << " " << get_unpair(Y);

	return 0;
}