#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, H, W, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        cout << (N % H == 0 ? H : N % H);
        cout.width(2);
        cout.fill('0');
        if (N % H != 0) {
            cout << N / H + 1<< "\n";
        } else {
            cout << N / H << "\n";
        }
        
    }

    return 0;
}