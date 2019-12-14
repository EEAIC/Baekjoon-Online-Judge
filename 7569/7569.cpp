#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

void bfs();

int ***warehouse;
int ***day;
queue<tuple<int, int, int>> qTomato;

int M, N, H;
int y_direction[6] = {0, -1, 0, 1, 0, 0};
int x_direction[6] = {1, 0, -1, 0, 0, 0};
int z_direction[6] = {0, 0, 0, 0, 1, -1};

int main() {
    int tmp_input;
    int max_rst = -1;

    cin >> M >> N >> H;
    warehouse = new int**[H];
    day = new int**[H];

    for(int i = 0; i < H; i++) {
        warehouse[i] = new int*[N];
        day[i] = new int*[N];
    }

    for(int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            warehouse[i][j] = new int[M];
            day[i][j] = new int[M];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                cin >> tmp_input;
                warehouse[i][j][k] = tmp_input;
                day[i][j][k] = -1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for(int k = 0; k < M; k++) {
                if (warehouse[i][j][k] == 1) {
                    qTomato.push(make_tuple(i, j, k));
                    day[i][j][k] = 0;
                }
            }
        }
    }

    bfs();

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for(int k = 0; k < M; k++) {
                if (warehouse[i][j][k] == 0) {
                    max_rst = -1;
                    cout << - 1;
                    return 0;
                }

                if (day[i][j][k] > max_rst) max_rst = day[i][j][k];
            }
        }
    }

    cout << max_rst;
    
    return 0;
}

void bfs() {
    int z, y, x;
    int tmp_z, tmp_y, tmp_x;
  
    while (!qTomato.empty())
    {
        z = get<0>(qTomato.front());
        y = get<1>(qTomato.front());
        x = get<2>(qTomato.front());
        qTomato.pop();
        for (int i = 0; i < 6; i++) {
            tmp_z = z + z_direction[i];
            tmp_y = y + y_direction[i];
            tmp_x = x + x_direction[i];
            if (0 <= tmp_z && tmp_z < H && 0 <= tmp_y && tmp_y < N && 0 <= tmp_x && tmp_x < M) {
                if (warehouse[tmp_z][tmp_y][tmp_x] == 0) {
                    qTomato.push(make_tuple(tmp_z, tmp_y, tmp_x));
                    warehouse[tmp_z][tmp_y][tmp_x] = 1;
                    day[tmp_z][tmp_y][tmp_x] = day[z][y][x] + 1;
                }
            }
        }
    }
}