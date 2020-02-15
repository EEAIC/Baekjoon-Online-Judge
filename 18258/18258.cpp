#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, tmp;
    string cmd;
    queue<int> que;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> tmp;
            que.push(tmp);
        } else if (cmd == "pop") {
            if (!que.empty()) {
                cout << que.front() << "\n";
                que.pop();
            } else {
                cout << "-1\n";
            }
        } else if (cmd == "size") {
            cout << que.size() << "\n";
        } else if (cmd == "empty") {
            cout << que.empty() << "\n";
        } else if (cmd == "front") {
            if (!que.empty()) {
                cout << que.front() << "\n";
            } else {
                cout << "-1\n";
            }
        } else if (cmd == "back") {
            if (!que.empty()) {
                cout << que.back() << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }

    return 0;
}