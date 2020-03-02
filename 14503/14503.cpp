#include <iostream>

using namespace std;

int main() {
    int rst = 0;
    int N, M;
    int r, c, d;

    cin >> N >> M;
    cin >> r >> c >> d;

    int **area = new int*[N];
    for (int i = 0; i < N; i++) {
        area[i] = new int[M];
        for (int j = 0; j < M; j++) {
            cin >> area[i][j];
        }
    }

    while(1) {
        if (area[r][c] == 0) {
            area[r][c] = 2;
            rst += 1;
        }

        if (area[r][c - 1] >= 1 && area[r - 1][c] >= 1 && area[r][c + 1]  >= 1 && area[r + 1][c]  >= 1) {
            if (d == 0) {
                if (area[r + 1][c] == 1) {
                    break;
                } else {
                    r = r + 1;
                }
            } else if (d == 1) {
                if (area[r][c - 1] == 1) {
                    break;
                } else {
                    c = c - 1;
                }
            } else if (d == 2) {
                 if (area[r - 1][c] == 1) {
                    break;
                } else {
                    r = r - 1;
                }
            } else if (d == 3) {
                if (area[r][c + 1] == 1) {
                    break;
                } else {
                    c = c + 1;
                }
            }
        } else if (d == 0) {
            if (area[r][c - 1] == 0) {
                d = 3;
                c = c - 1;
            } else {
                d = 3;
            }
        } else if (d == 1) {
            if (area[r - 1][c] == 0) {
                d = 0;
                r = r - 1;
            } else {
                d = 0;
            }
        } else if (d == 2) {
            if (area[r][c + 1] == 0) {
                d = 1;
                c = c + 1;
            } else {
                d = 1;
            }
        } else  if (d == 3) {
            if (area[r + 1][c] == 0) {
                d = 2;
                r = r + 1;
            } else {
                d = 2;
            }
        }
    }

    cout << rst;

    return 0;
}