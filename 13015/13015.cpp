#include <iostream>

using namespace std;

int main() {
    int N;
   
    cin >> N;

    int x = 2 * N + 2 * (N - 2) + 1;
    int y = N;

    int **arr = new int*[x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int[y];
    }

     for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        arr[i][0] = 1;
        arr[x - 1 - i][0] = 1;
    }
    arr[x - 1][0] = 2;

    for (int j = 1; j < N; j++) {
       arr[j][j] = 1;
       arr[j + N - 1][j] = 1;
       arr[x - 1 - j - (N - 1)][j] = 1;
       arr[x - 1 - j][j] = 2;
    }



    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (arr[j][i] == 1) {
                cout << "*";
            }
            else if (arr[j][i] == 2) {
                cout << "*\n";
                break;
            }
            else {
                cout << " ";
            }
        }

    }

    for (int i = y - 2; i >= 0; i--) {
        for (int j = 0; j < x; j++) {
            if (arr[j][i] == 1) {
                cout << "*";
            }
            else if (arr[j][i] == 2) {
                cout << "*\n";
                break;
            }
            else {
                cout << " ";
            }
        }
    }

    return 0;
}