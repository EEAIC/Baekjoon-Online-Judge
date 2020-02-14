#include <iostream>

using namespace std;

int *board;
int N;
int rst = 0;

bool promising(int col, int row) {
    bool flag = true;
    for (int i = 0; i < col; i++) {
        if(board[i] == row ||  abs(row - board[i]) == abs(col - i)) {
            flag = false;
            break;
        }
    }
    return flag;
}

void find_n_queen(int col) {
    for (int i = 0; i < N; i++) {
        if (col == 0 || promising(col, i)) {
            board[col] = i;
            if (col < N - 1) {
                find_n_queen(col + 1);
            } else {
                rst++;
                break;
            }
        } else {
            continue;
        }
    }

    return;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    board = new int[N];
    
    find_n_queen(0);
    
    cout << rst;

    return 0;
}