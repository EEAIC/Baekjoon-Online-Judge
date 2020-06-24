#include <iostream>
#include <algorithm>

using namespace std;

int **ranks;

bool compare(int A[], int B[]) {
    if (A[0] < B[0]) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N, rst, prevRankMax;
    
    cin >> T;

    for (int i = 0; i < T; i++) {
        rst = 0;
        cin >> N;
        ranks = new int*[N];
        for (int i = 0; i < N; i++) {
            ranks[i] = new int[2];
            cin >> ranks[i][0] >> ranks[i][1];
        }

        sort(ranks, ranks + N, compare);
        prevRankMax = N + 1;

        for (int i = 0; i < N; i++) {
            if (ranks[i][1] < prevRankMax) {
                prevRankMax = ranks[i][1];
                rst += 1;
            }
        }

        cout << rst << "\n";
        delete [] ranks;
    }

    return 0;
}
