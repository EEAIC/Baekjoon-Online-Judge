#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K, rst = 0;
    cin >> N >> M >> K;

    for (int i = 1; i <= M; i++) {
        if (2 * i <= N && (N + M - 3 * i) >= K) {
            rst = i;
        } else {
            break;
        }
    }

    cout << rst;

    return 0;   
}
