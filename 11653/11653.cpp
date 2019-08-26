#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	int d = 2;

	vector<int> ds;
	
    cin >> N;
    d = 2;
    while (N != 1) {
        if (N % d == 0) {
            ds.push_back(d);
            N /= d;
        }
        else {
            d++;
        }
    }

    for (auto k : ds) {
        cout << k << "\n";
    }
	
	return 0;
}