#include <iostream>

using namespace std;
int factorial(int a);

int main() {
	int N; 
	cin >> N;
	cout << factorial(N);

	return 0;
}

int factorial(int a) {
	if (a == 0) return 1;
	if (a == 1) return 1;
	if (a > 1) return a * factorial(a - 1);
}