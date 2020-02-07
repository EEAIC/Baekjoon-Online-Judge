#include <iostream>

using namespace std;

int main() {
    long long int N;
    long long int rst = 0;
    cin >> N;

    long long int **dp = new long long int*[N];
    for (int i = 0; i < N; i++) {
        dp[i] = new long long int[10];
    }

    for (int i = 0; i < 10; i++) {
        dp[0][i] = 1; // i로 끝나는 숫자의 개수
    }

    dp[0][0] = 0;

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            if (j > 0 && j < 9) {
                dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % 1000000000;
            } else if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1] % 1000000000;
            } else {
                dp[i][j] = dp[i - 1][j - 1] % 1000000000;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        rst = (rst + dp[N - 1][i]) % 1000000000;
    }

    cout << rst;
    
    return 0;
}