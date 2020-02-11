#include <iostream>

using namespace std;

int main() {
    int N, K;
    int rst = 0;
    cin >> N >> K;

    int *val = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> val[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        if (K / val[i] > 0) {
            rst += (K / val[i]);
            K = K % val[i];
        }

        if (K == 0) break;
    }

    cout << rst;

    return 0;
}