#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int ** arr = new int*[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[2 * N];
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            if ((i + j) % 2 == 0) arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            if (arr[i][j]) cout << "*";
            else cout << " ";
            if (j == 2 * N - 1) cout << "\n";
        }
    }

    return 0;
}