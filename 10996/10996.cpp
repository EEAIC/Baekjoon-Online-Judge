#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < N; j++) {
            if ((i + j) % 2 == 0) cout << "*";
            else cout << " ";

            if (j == N - 1) cout << "\n";
        }
    }

    return 0;
}