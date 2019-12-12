#include <iostream>
#include <queue>

using namespace std;

void bfs_cnt(int x, int y);

int **maze;
queue<pair<int, int>> q;

int **d;
int N, M;
char tmp;
int main() {
    cin >> N >> M;
    maze = new int*[N];
    d = new int*[N];

    for (int n = 0; n < N; n++) {
        maze[n] = new int[M];
        d[n] = new int[M];
    }

    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cin >> tmp;
            maze[n][m] = tmp - '0';
            d[n][m] = -1;
        }
    }

    d[0][0] = 1;

    bfs_cnt(0, 0);
    cout << d[N - 1][M - 1];
    
    return 0;
}

void bfs_cnt(int n, int m) {
    maze[n][m] = 0;
    q.push(make_pair(0, 0));
    while(!q.empty()) {
        n = q.front().first;
        m = q.front().second;
        q.pop();

        if (n == N - 1 && m == M - 1) {
            return;
        }
        if (m + 1 < M && maze[n][m + 1]) {
            maze[n][m + 1] = 0;
            q.push(make_pair(n, m + 1));
            if (d[n][m + 1] == -1 || d[n][m + 1] > d[n][m] + 1) d[n][m + 1] = d[n][m] + 1;
        }
        if (n + 1 < N && maze[n + 1][m]) {
            maze[n + 1][m] = 0;
            q.push(make_pair(n + 1, m));
            if (d[n + 1][m] == -1 || d[n + 1][m] > d[n][m] + 1) d[n + 1][m] = d[n][m] + 1;
        } 
        if (m - 1 >= 0 && maze[n][m - 1]) {
            maze[n][m - 1] = 0;
            q.push(make_pair(n, m - 1));
            if (d[n][m - 1] == -1 || d[n][m - 1] > d[n][m] + 1) d[n][m - 1] = d[n][m] + 1;
        } 
        if (n - 1 >= 0 && maze[n - 1][m]) {
            maze[n - 1][m] = 0;
            q.push(make_pair(n - 1, m));
            if (d[n - 1][m] == -1 || d[n - 1][m] > d[n][m] + 1) d[n - 1][m] = d[n][m] + 1;
        } 
    }
    
    return;
}