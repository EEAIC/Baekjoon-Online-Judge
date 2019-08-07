#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int X, Y, W, H;
	cin >> X >> Y >> W >> H;

	vector<int> length;
	length.push_back(W - X);
	length.push_back(H - Y);
	length.push_back(X);
	length.push_back(Y);

	sort(length.begin(), length.end());
	cout << length.front();

	return 0;
}