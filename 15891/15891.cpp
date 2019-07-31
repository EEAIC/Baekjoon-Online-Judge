#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int answers[5] = { 65, 17, 4, 4, 64 };
	int x;
	cin >> x;
	cout << answers[x - 1];
	return 0;
}