#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *wine = new int[n];
    int **dp = new int*[n];

    for(int i = 0; i < n; i++) {
        dp[i] = new int[3];
    }

    for (int i = 0; i < n; i++) {
        cin >> wine[i];
    }

    dp[0][0] = 0;
    dp[0][1] = wine[0];
    dp[0][2] = 0;

    for (int i = 1; i < n; i++) {
        dp[i][0] = max(max(dp[i - 1][2], dp[i - 1][1]), dp[i - 1][0]);
        dp[i][1] = dp[i - 1][0] + wine[i];
        dp[i][2] = dp[i - 1][1] + wine[i];
    }

    cout << max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);

    return 0;
}