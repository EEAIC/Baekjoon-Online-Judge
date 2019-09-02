#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << (N + 1) * (N + 1) / 4 << "\n";
    }

    return 0;
}