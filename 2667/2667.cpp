#include <iostream>
#include <algorithm>

using namespace std;

void bfs(int y, int x, int c);

int **m;
int N;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 1;
    char tmp;
    cin >> N;
    m = new int*[N];

    for (int i = 0; i < N; i++) {
        m[i] = new int[N];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> tmp;
            m[i][j] = tmp - '0';
        }
       
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (m[i][j] == 1) {
                ++cnt;
                bfs(i, j, cnt);
            }

        }    
    }

    --cnt;
    int *rst = new int[cnt];

    for (int i = 0; i < cnt; i++) {
        rst[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (m[i][j] > 1) {
                rst[m[i][j] - 2] += 1;  
            }
        }
    }

    cout << cnt << "\n";
    sort(rst, rst + cnt);
    
    for (int i = 0; i < cnt; i++) {
        cout << rst[i] << "\n";
    }

    return 0;
}

void bfs(int y, int x, int c){
    m[y][x] = c;
    if (x + 1 < N && m[y][x + 1] == 1) bfs(y, x + 1, c);
    if (y + 1 < N && m[y + 1][x] == 1) bfs(y + 1, x, c);
    if (x >= 1 && m[y][x - 1] == 1) bfs(y, x - 1, c);
    if (y >= 1 && m[y - 1][x] == 1) bfs(y - 1, x, c); 
}