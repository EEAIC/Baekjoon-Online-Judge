#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, N, M, v, vFlag;
	int cnt = 0;
	pair<int, int> select_v;
	vector<pair<int, int>> vec;
	vector<pair<int, int>>::iterator vit;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		if (!vec.empty()) {
			vec.erase(vec.begin(), vec.end());
		}
		cnt = 0;
		for (int j = 0; j < N; j++) {
			cin >> v;
			vec.push_back({v, j});
		}
		while (!vec.empty()) {
			select_v = *vec.begin();
			vFlag = true;
			for (vit = vec.begin(); vit != vec.end(); ++vit) {
				if (select_v.first < vit->first) {
					vec.push_back(select_v);
					vec.erase(vec.begin(), vec.begin() + 1);
					vFlag = false;
					break;
				}
			}
			if (vFlag) {
				if (vec.front().second == M) {
					cnt++;
					break;
				}
				else {
					vec.erase(vec.begin(), vec.begin() + 1);
					cnt++;
				}
			}
		}

		cout << cnt << "\n";

	}

	return 0;
}