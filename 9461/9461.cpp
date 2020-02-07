#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    int start = 5;
    cin >> T;

    long long int *dp = new long long int[101];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;    

    for (int i = 0; i < T; i++) {
        cin >> N;
        if (N > start) {
            for (int j = start + 1; j <= N; j++) {
                dp[j] = dp[j - 1] + dp[j - 5];
            }
            start = N;
        }
        cout << dp[N] << "\n";
    }

    return 0;
}