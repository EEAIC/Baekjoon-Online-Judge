#include <iostream>

using namespace std;

int main() {
    int N, F, rst;
    cin >> N >> F;
    N = N / 100 * 100;
    if (N % F == 0) {
        cout << 0 << 0;
    } else {
        rst = F - N % F;

        if (rst < 10) cout << 0 << rst;
        else cout << rst; 
    }

    return 0;
}