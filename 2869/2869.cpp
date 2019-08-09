#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int V, A, B;
	cin >> A >> B >> V;

	if (V > A) {
		if ((V - A) % (A - B) == 0) {
			cout << (V - A) / (A - B) + 1;
		}
		else {
			cout << (V - A) / (A - B) + 2;
		}
	}
	else {
		cout << 1;
	}
	
	return 0;
}