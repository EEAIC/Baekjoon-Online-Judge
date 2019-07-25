#include <iostream>

using namespace std;

int main()
{
	int nums[10] = { 0 };
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> nums[i];
	}

	for (int j = 0; j < 9; j++) {
		if (max < nums[j]) {
			max = nums[j];
			max_index = j + 1;
		}
	}

	cout << max << endl << max_index;

	return 0;
}
