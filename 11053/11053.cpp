#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    int rst = 0;
    cin >> N;

    int *A = new int[N];

    map<int, int> *dp = new map<int, int>[N];


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    dp[0].insert(make_pair(A[0], 1));

    for (int i = 1; i < N; i++) {
        for (auto it = dp[i - 1].begin(); it != dp[i - 1].end(); ++it) {
            if(it->first < A[i]) {
                if (dp[i].find(A[i]) == dp[i].end()) {
                    dp[i].insert(make_pair(A[i], it->second + 1));
                } else {
                    if (dp[i].find(A[i])->second < it->second + 1) {
                        dp[i].find(A[i])->second = it->second + 1;
                    }
                }
            }
            
            
            if (dp[i].find(it->first) == dp[i].end()) {
                dp[i].insert(make_pair(it->first, it->second));
            } else {
                if (it->second > dp[i].find(it->first)->second) {
                    dp[i].find(it->first)->second = it->second;
                }
            }

            if (dp[i].find(A[i]) == dp[i].end()) {
                dp[i].insert(make_pair(A[i], 1));
            }
            
        } 
    }   

   for (auto it = dp[N - 1].begin(); it != dp[N - 1].end(); ++it) {
        if (rst < it->second) rst = it->second;
    }

    cout << rst;

    return 0;
}

