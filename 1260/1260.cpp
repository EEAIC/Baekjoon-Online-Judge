#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


void dfs(int n);
void bfs(int n);

vector<int> *adj_list;
int *visited;

int main() {
    int N, M, V;
    int s, t;
    cin >> N >> M >> V;

    if (V > N) {
        return 0;
    }
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

    for (int i = 0; i < N; i++) {
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    
    dfs(V - 1);
    
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    }

    cout << "\n";
    bfs(V - 1);

    return 0;
}

void dfs(int n) {
    cout << n + 1 << " ";
    visited[n] = 1;
    for (int i = 0; i < adj_list[n].size(); i++) {
        if (!visited[adj_list[n][i]]){
            dfs(adj_list[n][i]);
        } 
    }

    return;
}

void bfs(int n) {
    queue<int> _qVisited;
    _qVisited.push(n);
    visited[n] = 1;
    while(!_qVisited.empty()) {
        n = _qVisited.front();
        _qVisited.pop();
        cout << n + 1 << " ";
        for (int i = 0; i < adj_list[n].size(); i++) {
            if (visited[adj_list[n][i]] == 0) {
                visited[adj_list[n][i]] = 1;
                _qVisited.push(adj_list[n][i]);
            }
        }
    }

    return;
}