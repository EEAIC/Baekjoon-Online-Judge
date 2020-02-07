#include <iostream>

using namespace std;

long long int **triangle, **dp;

int main() {
    long long int n, max;
    cin >> n;
    triangle = new long long int*[n];
    dp = new long long int*[n];

    for (int i = 0; i < n; i++) {
        triangle[i] = new long long int[i + 1];
        dp[i] = new long long int[i + 1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
            dp[i][j] = 0;
        }
    }

    dp[0][0] = triangle[0][0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 0 && j < i) {
                if( dp[i - 1][j - 1] > dp[i - 1][j]) {
                    dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
                } else {
                    dp[i][j] = dp[i - 1][j] + triangle[i][j];
                }
            } else if (j == 0) {
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
            } else {
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == 0)  max = dp[n - 1][i];
        if (max < dp[n - 1][i]) max = dp[n - 1][i];
    }
    
    cout << max;

    return 0;
}