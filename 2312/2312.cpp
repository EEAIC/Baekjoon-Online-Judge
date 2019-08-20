#include <iostream>
#include <map>

using namespace std;

int main() {
	int T, N;
	int d = 2;
	cin >> T;

	map<int, int> ds;
	for (int i = 0; i < T; i++) {
		cin >> N;
		if (!ds.empty()) {
			ds.erase(ds.begin(), ds.end());
		}
		d = 2;
		while (N != 1) {
			if (N % d == 0) {
				if (ds[d]) ds[d] += 1;
				else ds[d] = 1;
				N /= d;
			}
			else {
				d++;
			}
		}

		for (auto k : ds) {
			cout << k.first << " " << k.second << "\n";
		}
	}
	return 0;
}