#include <iostream>

using namespace std;

int main() {
    int N, rst = 0;
    cin >> N;

    int students[N][2];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> students[i][j];
        }
        rst += students[i][1] % students[i][0];
    }

    cout << rst;

    return 0;
}
