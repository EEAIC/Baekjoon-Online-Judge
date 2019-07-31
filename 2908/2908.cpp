#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	A = A % 10 * 100 + (A / 10 - (A / 100) * 10) * 10 + A / 100;
	B = B % 10 * 100 + (B / 10 - (B / 100) * 10) * 10 + B / 100;
	cout << (A > B ? A : B) << "\n";

	return 0;
}