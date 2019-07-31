#include <iostream>

using namespace std;
int haveConstructor(int number);

int main() {
	for (int i = 1; i <= 10000; i++) {
		if (!haveConstructor(i)) cout << i << endl;
	}
	return 0;
}

int haveConstructor(int number) {
	int predicted = 0;
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				for (int d = 0; d < 10; d++) {
					if (1001 * a + 101 * b + 11 * c + 2 * d > number) break;
					if (1001 * a + 101 * b + 11 * c + 2 * d == number) return true;
				}
			}
		}
	}
	return false;
}