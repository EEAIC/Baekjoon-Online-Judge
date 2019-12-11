#include <iostream>
#include <vector>

using namespace std;

void bfs(int v);

vector<int> *adj_list;
int *visited;

int main() {
    int N, M;
    int s, t;
    int rst = 0;
    cin >> N >> M;
    adj_list = new vector<int>[N];
    visited = new int[N];

    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        cin >> s >> t;
        --s;
        --t;
        adj_list[s].push_back(t);
        adj_list[t].push_back(s);
    }

    bfs(0);

    for(int i = 1; i < N; i++) {
        rst += visited[i];
    }
    
    cout << rst;

    return 0;
}

void bfs(int v) {
    visited[v] = 1;
    for (int i = 0; i < adj_list[v].size(); i++) {
        if (visited[adj_list[v][i]] == 0) {
            bfs(adj_list[v][i]);
        }
    }
}