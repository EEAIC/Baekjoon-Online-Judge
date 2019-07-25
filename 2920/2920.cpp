#include <iostream>

using namespace std;

int main()
{
	int nums[8] = { 0 };
	int num_direction = -2; // 1:ascending 0: mixed -1:descending -2: none
	for (int i = 0; i < 8; i++) {
		cin >> nums[i];
		if (i != 0) {
			if (nums[i - 1] < nums[i]) {
				if (num_direction == -2) {
					num_direction = 1;
				}
				else if (num_direction == -1) {
					num_direction = 0;
					break;
				}
			}
			else {
				if (num_direction == -2) {
					num_direction = -1;
				} else if (num_direction == 1) {
					num_direction = 0;
					break;
				}
			}
		}
	}
	switch (num_direction)
	{
	case 1:
		cout << "ascending";
		break;
	case 0:
		cout << "mixed";
		break;
	case -1:
		cout << "descending";
		break;
	default:
		break;
	}

	return 0;

}