#include <iostream>

using namespace std;

int main() {
    int N;
    int direction = 1;
    cin >> N;

    int **arr = new int *[4 * N - 3];
    for (int i = 0; i < 4 * N - 3; i++) {
        arr[i] = new int[4 * N - 1];
    }

    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 1; j++) {
            arr[i][j] = 0;
        }
    }

    int rotate_cnt = 0;
    int x = 4 * N - 4;
    int y = 0;
    arr[x][y] = 1;
    if (N != 1) {
    while(rotate_cnt < 2) {
        switch (direction)
        {
        case 1: //left
            if (x - 2 >= 0 && arr[x - 2][y] == 1) {
                direction = 2;
                rotate_cnt++;
            } else {
                arr[x - 1][y] = 1;
                x -= 1;
                rotate_cnt = 0;
                if (x == 0) {
                    direction = 2;
                }
            }
            break;
        case 2: //down 
            if (y + 2 <= 4 * N - 2 && arr[x][y + 2] == 1) {
                direction = 3; 
                rotate_cnt++;

            } else {
                arr[x][y + 1] = 1;
                y += 1;
                rotate_cnt = 0;
                if (y == 4 * N - 2) {
                    direction = 3;
                }
            }
            break;
        case 3: // right
            if (x + 2 <= 4 * N - 4 && arr[x + 2][y] == 1) {
                direction = 4; 
                rotate_cnt++;
            } else {
                arr[x + 1][y] = 1;
                x += 1;
                rotate_cnt = 0;
                if (x == 4 * N - 4) {
                    direction = 4;
                }
            }
            break;
        case 4: // up
            if (arr[x][y - 2] == 1) {
                direction = 1; 
                rotate_cnt++;
            } else {
                arr[x][y - 1] = 1;
                y -= 1;
                rotate_cnt = 0;
            }
            break;
        default:
            break;
        }
    }
        for (int i = 0; i < 4 * N - 1; i++) {
            for (int j = 0; j < 4 * N - 3; j++) {
                if (arr[j][i] == 1) cout << "*";
                else if (i > 1) cout << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "*\n";
    }

    return 0;
}
