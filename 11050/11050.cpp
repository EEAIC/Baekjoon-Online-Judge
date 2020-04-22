#include <iostream>

using namespace std;

int main() {
    int N, K, rst = 1;
    cin >> N >> K;
    
    if (N / 2 < K) {
        K = N - K;
    }

    for (int i = 0; i < K; i++) {
        rst *= (N - i);
    }

    for (int i = K; i > 1; i--) {
        rst /= i;
    }

    cout << rst;

    return 0;
}
