#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

static bool map_compare(pair<long long int, int> a, pair<long long int, int> b) {
	return a.second < b.second;
}

int main() {
	int N;
	long long int tmp;
	map<long long int, int> mp;
	map<long long int, int>::iterator it;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		mp[tmp] += 1;
	}


	 it = max_element(mp.begin(), mp.end(), map_compare);
	 cout << it->first;

	return 0;
}