#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K, tmp;
	vector<int> vec;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		vec.push_back(tmp);
	}
	
	nth_element(vec.begin(), vec.begin() + K - 1, vec.end());
	cout << vec.at(K - 1);
	
	return 0;
}