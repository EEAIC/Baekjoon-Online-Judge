#include <iostream>
#include <algorithm>
#include <valarray>

using namespace std;

int main() {
	valarray<int> arr(5);

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	sort(begin(arr), end(arr));
	cout << arr.sum() / 5 << "\n";
	cout << arr[2];
	return 0;
}