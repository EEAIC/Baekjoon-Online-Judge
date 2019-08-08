#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	vector<int> vec;
	int X, Y;
	cin >> X >> Y;
	vec.push_back(0);
	for (int i = 1; i <= 44; i++) {
		for (int j = 0; j < i; j++) {
			vec.push_back(i);
		}
	}

	for (int i = 0; i <= 10; i++) { // 1001 구간까지 저장
		vec.push_back(45);
	}

	cout << accumulate(&vec[X], &vec[Y + 1], 0);

	return 0;
}