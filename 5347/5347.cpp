#include <iostream>

using namespace std;

int main() {
	unsigned int n, a, b, Tmp;
	unsigned long long int rst;
	cin >> n;
	for (unsigned int i = 0; i < n; i++) {
		cin >> a >> b;
		rst = (unsigned long long int)a * b;
		while (b != 0) {
			if (a < b) swap(a, b);
			Tmp = b;
			b = a % b;
			a = Tmp;
		}
		cout << rst / a << "\n";
	}

	return 0;
}