#include <iostream>

using namespace std;

int main() {
	int N;
	int max = 0;
	int sum = 0;
	float rst = 0;
	cin >> N;
	int* scores = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> scores[i];
		sum += scores[i];
	}

	for (int i = 0; i < N; i++) {
		if (max < scores[i]) {
			max = scores[i];
		}
	}

	rst = 100 * (float)sum / (max * N);

	cout << rst;

	return 0;
}