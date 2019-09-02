#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int P, rst, N;
    cin >> P;
    for (int i = 0; i < P; i++) {
        rst = 0;
        cin >> N;
        for(int j = 0; N - j > 0; j++) {
            rst += (N -j) * (N - j);
        }
        cout << rst << "\n";
    }

    return 0;
}