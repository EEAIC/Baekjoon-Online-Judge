#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, r, e, c;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> r >> e >> c;
        if (r <  e - c) {
            cout << "advertise";
        } else if (r == e - c) {
            cout << "does not matter";
        } else {
            cout << "do not advertise";
        }
        cout << "\n";
    }

    return 0;
}