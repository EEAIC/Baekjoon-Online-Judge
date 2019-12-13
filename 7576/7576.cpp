#include <iostream>
#include <queue>

using namespace std;

void bfs();

int **warehouse;
int **day;
queue<pair<int, int>> qTomato;

int M, N;
int y_direction[4] = {0, -1, 0, 1};
int x_direction[4] = {1, 0, -1, 0};

int main() {
    int tmp_input;
    int max_rst = -1;

    cin >> M >> N;
    warehouse = new int*[N];
    day = new int*[N];

    for(int i = 0; i < N; i++) {
        warehouse[i] = new int[M];
        day[i] = new int[M];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tmp_input;
            warehouse[i][j] = tmp_input;
            day[i][j] = -1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (warehouse[i][j] == 1) {
                qTomato.push(make_pair(i, j));
                day[i][j] = 0;
            }
        }
    }

    bfs();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (warehouse[i][j] == 0) {
                max_rst = -1;
                cout << - 1;
                return 0;
            }

            if (day[i][j] > max_rst) max_rst = day[i][j];
        }
    }

    cout << max_rst;
    
    return 0;
}

void bfs() {
    int y, x;
    int tmp_y, tmp_x;
  
    while (!qTomato.empty())
    {
        y = qTomato.front().first;
        x = qTomato.front().second;
        qTomato.pop();
        for (int i = 0; i < 4; i++) {
            tmp_y = y + y_direction[i];
            tmp_x = x + x_direction[i];
            if (0 <= tmp_y && tmp_y < N && 0 <= tmp_x && tmp_x < M) {
                if (warehouse[tmp_y][tmp_x] == 0) {
                    qTomato.push(make_pair(tmp_y, tmp_x));
                    warehouse[tmp_y][tmp_x] = 1;
                    day[tmp_y][tmp_x] = day[y][x] + 1;
                }
            }
        }
    }
}