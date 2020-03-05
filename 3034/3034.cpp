#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, W, H, tmp;

    cin >> N >> W >> H;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (tmp * tmp <= W * W + H *H) {
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }

    return 0;
}