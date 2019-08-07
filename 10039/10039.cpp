#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int scores[5] = { 0, };
	int score;
	int rst = 0;
	for (int i = 0; i < 5; i++) {
		cin >> score;
		if (score < 40) scores[i] = 40;
		else scores[i] = score;
	}

	for (auto sc : scores) {
		rst += sc;
	}

	cout << rst / 5;
	
	return 0;
}