#include <iostream>
#include <list>
#include <stack>

using namespace std;


stack<int> stk;
list<int> *adj;
bool *visited;

void bfs_sort(int index) {
    visited[index] = true;
    for (auto elem: adj[index]) {
        if (!visited[elem]) {
            bfs_sort(elem);
        }
    }
    stk.push(index);
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, M, A, B;
    cin >> N >> M;
    adj = new list<int>[N];
    visited = new bool[N];
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }
    
    for (int i = 0; i < M;  i++) {
        cin >> A >> B;
        adj[A - 1].push_back(B - 1);
    }


    for (int i = 0; i < N; i++) {
        if (visited[i] == false) {
            bfs_sort(i);
        }
    }

    while(!stk.empty()) {
        cout << stk.top() + 1 << " ";
        stk.pop();
    }

    return 0;
}