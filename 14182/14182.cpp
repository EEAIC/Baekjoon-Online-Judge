#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios_base::fixed);
    cout.precision(0);
    int L;
    while(true) {
        cin >> L;
        if (L == 0) break;

        if (L  <= 1000000) cout << L;
        else if (1000000 < L && L <= 5000000) cout << L * 0.9;
        else cout << L * 0.8;
        cout << "\n";
        
    }

    return 0;
}