#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double A1;
	cin >> A1;
	double X = 1;
	double Tmp_X = 1;
	double Y = 1;
	double X_prime = 0;
	double Tmp_Xprime = 0;
	double Y_prime = 1;
	double min_num = 1;
	int total_num = 2;

	while (floor(X / Y * A1) - X_prime / Y_prime * A1 >= 0) {
		min_num = floor(X / Y * A1);
		total_num += 1;
		Tmp_Xprime = X_prime + Y_prime;
		Y_prime = X_prime + 2 * Y_prime;
		X_prime = Tmp_Xprime;
		if (floor(X / Y * A1) - X_prime / Y_prime * A1 >= 0) {
			min_num = floor(X / Y * A1);
			total_num += 1;
		}
		else {
			break;
		}

		Tmp_X = X + Y;
		Y = X + 2 * Y;
		X = Tmp_X;
	}

	cout << total_num << "\n";

	cout << A1 << " " << min_num;
	double value = A1 - min_num;
	double tmp_value = min_num;
	double ttmp_value;
	while (value >= 0) {
		cout << " " << (int)value;
		ttmp_value = value;
		value = tmp_value - value;
		tmp_value = ttmp_value;
	}


	return 0;
}