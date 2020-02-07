#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int *dp = new int[N];

    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    cout << dp[N - 1] ;


    return 0;
}