#include <iostream>

using namespace std;

int main() {
    int n, T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        for (int bit = 0; n > 0; bit++) {
            if (n % 2) cout << bit << " ";
            n = n / 2;
        }
    }
    return 0;
}