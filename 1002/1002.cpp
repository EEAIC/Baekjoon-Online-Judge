#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, X1, Y1, R1, X2, Y2, R2, distance_pow, r_plus_pow, r_minus_pow;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;

        distance_pow = (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2);
        r_plus_pow = (R1 + R2) * (R1 + R2);
        r_minus_pow = (R1 - R2) * (R1 - R2);

        if (distance_pow == r_plus_pow) {
            cout << 1 << "\n";
        } else if (distance_pow < r_plus_pow) {
            if (distance_pow == r_minus_pow) {
                if (r_minus_pow == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << 1 << "\n";
                }
            } else if (distance_pow < r_minus_pow) {
                cout << 0 << "\n";
            } else {
                cout << 2 << "\n";
            }
        } else {
            cout << 0 << "\n";
        }
        
    }

    return 0;
}