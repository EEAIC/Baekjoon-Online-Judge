#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2) {
        for (int i = 0; i < N; i++) {
            cout << "*";
        }
        cout << "\n";
        for (int i = 0; i < N / 2 + 1; i++) {
            for (int j =  N / 2 - i; j > 0 ; j--) {
                cout << " ";
                
            }
            cout << "*";
            for (int k = 0; k < 1 + 2 * (i - 1); k++) {
                cout << " ";
            }
            
            if (i != 0) cout << "*";
            cout << "\n";
        }

    } else {
        cout << "I LOVE CBNU";
    }
    return 0;
}
