#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int _a, _b, _c;
	int a_prime, b_prime, c_prime;
	cin >> a_prime >> b_prime >> c_prime;
	a = 0;
	b = 0;
	c = 0;
	while (1) {
		_a = 15 * a + a_prime;
		_b = 28 * b + b_prime;
		_c = 19 * c + c_prime;
		
		if (_a == _b && _b == _c && _c == _a) {
			break;
		}
		else {
			if (_c <= _a && _c <= _b) {
				c++;
			}
			else if (_b <= _a && _b <= _c) {
				b++;
			}
			else {
				a++;
			}
		}
	}

	cout << _a;
	return 0;
}