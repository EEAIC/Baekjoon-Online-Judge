#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;

    cin >> M >> N;
    int *arr = new int[N + 1];
    for (int i = 0; i < N + 1; i++) {
        arr[i] = 1;
    }
    

    for (int j = 2; j <= N; j++) {
        if (arr[j]) {
            if (M <= j && j <= N) cout << j << "\n";
            if (j <= (int)ceil(sqrt(N))) {
                for (int k = j + 1; k <= N; k++) {
                    if (k % j == 0) arr[k] = 0;
                }
            }
        }
    }

    return 0;
}