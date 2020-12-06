#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int **dp = new int*[A.length() + 1];
    for (int i = 0; i <= A.length(); i++) {
        dp[i] = new int[B.length() + 1];
        for (int j = 0; j <= B.length(); j++) {
            dp[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= A.length(); i++) {
        for (int j = 1; j <= B.length(); j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[A.length()][B.length()];

    return 0;
}
