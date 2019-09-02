#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int** arr = new int*[4 * (N - 1) + 1];
    for (int i = 0; i < 4 * (N - 1) + 1; i++) {
        arr[i] = new int[4 * (N - 1) + 1];
    }

    for (int i = 0; i < 4 * (N - 1) + 1; i++) {
        for (int j = 0; j < 4 * (N - 1) + 1; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for(int j = 2 * i; j < (4 * (N - 1) + 1) - (2 * i);j++) {
            arr[2 * i][j] = 1;
            arr[(4 * (N - 1)) - 2 * i][j] = 1;
            arr[j][2 * i] = 1;
            arr[j][(4 * (N - 1)) - 2 * i] = 1;
        }
    }

    for (int i = 0; i < 4 * (N - 1) + 1; i++) {
        for (int j = 0; j < 4 * (N - 1) + 1; j++) {
            if (arr[i][j]) cout << "*";
            else cout << " ";

            if (j == 4 * (N - 1))  cout << "\n";
        }
    }
    
    return 0;
}