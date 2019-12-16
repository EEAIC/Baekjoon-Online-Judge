#include <iostream>
#include <queue>

using namespace std;


int pos[100001] = { 0, };
int d[100001] = { 0, };

queue<int> qPoint;

void bfs(int n, int k);

int main() {
    int N, K;
    cin >> N >> K;
    bfs(N, K);

    cout << d[K];
    return 0;
}

void bfs(int n, int k) {
    int tmp_pos = 0;
    qPoint.push(n);
    pos[n] = 1;
    d[n] = 0;
    while (!qPoint.empty())
    {
        tmp_pos = qPoint.front();

        if (tmp_pos == k) {
            break;
        }
        qPoint.pop();
        if (tmp_pos - 1 >= 0 && pos[tmp_pos - 1] == 0) {
            qPoint.push(tmp_pos - 1);
            pos[tmp_pos - 1] = 1;
            d[tmp_pos - 1] = d[tmp_pos] + 1;
        }
        if (tmp_pos + 1 < 100001 && pos[tmp_pos + 1] == 0) {
            qPoint.push(tmp_pos + 1);
            pos[tmp_pos + 1] = 1;
            d[tmp_pos + 1] = d[tmp_pos] + 1;
        }
        if (2 * tmp_pos < 100001 && pos[2 * tmp_pos] == 0) {
            qPoint.push(2 * tmp_pos);
            pos[2 * tmp_pos] = 1;
            d[2 * tmp_pos] = d[tmp_pos] + 1;
        }
    }
    
}