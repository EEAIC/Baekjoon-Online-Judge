#include <iostream>

using namespace std;

int main() {
    int board[101][101] = { 0,};
    int N, x, y;
    int rst = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                board[y + j][x + k] = 1;
            }
        }
    }

    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            rst += board[j][i];
        }
    }

    cout << rst;

    return 0;
}