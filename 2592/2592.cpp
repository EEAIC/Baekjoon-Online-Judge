#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	map<int, int> mp;
	map<int, int>::iterator it;
	pair<int, int> max;
	int tmp;
	int rst = 0;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		if (mp[tmp]) {
			mp[tmp] += 1;
		}
		else {
			mp[tmp] = 1;
		}
	}

	for (it = mp.begin(), max.first = mp.begin()->first, max.second = mp.begin()->second; it != mp.end(); ++it) {
		if (max.second < it->second) {
			max.first = it->first;
			max.second = it->second;
		}
		rst += it->first * it->second;
	}

	cout << rst / 10 << "\n";

	cout << max.first;


	return 0;
}