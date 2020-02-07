#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, rst;
    cin >> N;

    int **dp = new int*[N];
    int **expense = new int*[N];

    for (int i = 0; i < N; i++) {
        dp[i] = new int[3];
        expense[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            cin >> expense[i][j];
        }
    }

    dp[0] = expense[0];

    // 0 : 빨강
    // 1 : 초록
    // 2 : 파랑
    for (int i = 1; i < N; i++) {
        if (dp[i - 1][1] < dp[i - 1][2]) {
            dp[i][0] = dp[i - 1][1] + expense[i][0];
        } else {
            dp[i][0] = dp[i - 1][2] + expense[i][0];
        }

        if (dp[i - 1][0] < dp[i - 1][2]) {
            dp[i][1] = dp[i - 1][0] + expense[i][1];
        } else {
            dp[i][1] = dp[i - 1][2] + expense[i][1];
        }

        if (dp[i - 1][0] < dp[i - 1][1]) {
            dp[i][2] = dp[i - 1][0] + expense[i][2];
        } else {
            dp[i][2] = dp[i - 1][1] + expense[i][2];
        }
    }

    rst = dp[N - 1][0];
    for (int i = 1; i < 3; i++) {
        if (rst > dp[N - 1][i]) rst = dp[N - 1][i];
    }

    cout << rst;

    return 0;   
}