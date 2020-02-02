#include <iostream>
#include <string>

using namespace std;

int **board;

int main() {
    int N, M;
    int rst = -1;
    int cnt;
    string tmp;

    cin >> N >> M;

    board = new int*[N];
    for (int i = 0; i < N; i++) {
        board[i] = new int[M];
    }

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] == 'B') {
                board[i][j] = 0;
            } else {
                board[i][j] = 1;
            }
        }
    }

    
    for (int m = 0; m <= M - 8; m++) {
        for (int n = 0; n <= N - 8; n++) {
            cnt = 0;
            for (int i = 0 + n; i < 8 + n; i++) {
                for (int j = 0 + m; j < 8 + m; j++) {
                    if ((i + j) % 2 == 0) {
                        if (board[i][j] != 0) {
                            cnt += 1;
                        }
                    } else {
                        if (board[i][j] != 1) {
                            cnt += 1;
                        }
                    }
                }
            }

            if (64 - cnt < cnt){
                cnt = 64 -cnt;
            }

            if (rst == -1) rst = cnt;
            else if (rst > cnt) rst = cnt;
        }
    }

    cout << rst;


    return 0;
}