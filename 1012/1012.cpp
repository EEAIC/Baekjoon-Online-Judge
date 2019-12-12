#include <iostream>

using namespace std;

void dfs(int n, int m);

int **land;
int M, N;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, K;
    int x, y, cnt;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> M >> N >> K;
        cnt = 0;
        land = new int*[N];
        for (int n = 0; n < N; n++){
            land[n] = new int[M];
            for(int m = 0; m < M; m++) {
                land[n][m] = 0;
            }
        }

        for (int k = 0; k < K; k++) {
            cin >> x >> y;
            land[y][x] = 1;
        }

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                if (land[n][m] == 1) {
                    cnt++;
                    dfs(n, m);
                }
            }
        }

        cout << cnt << "\n";

        for(int n = 0; n < N; n++){
            delete [] land[n];
        }

        delete [] land;

    }
    return 0;
}

void dfs(int n, int m) {
    land[n][m] = 0;
    if (m + 1 < M && land[n][m + 1]) dfs(n, m + 1);
    if (n + 1 < N && land[n + 1][m]) dfs(n + 1, m);
    if (m - 1 >= 0 && land[n][m - 1]) dfs(n, m - 1);
    if (n - 1 >= 0 && land[n - 1][m]) dfs(n - 1, m);

    return;
}