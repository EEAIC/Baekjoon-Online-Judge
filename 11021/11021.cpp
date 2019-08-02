#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int A, B;
	for (int i = 1; i <= N; i++) {
		cin >> A >> B;
		cout << "Case #" << i << ": "<< A + B << "\n";
	}
	return 0;
}
