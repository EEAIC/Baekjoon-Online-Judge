#include <iostream>
#include <algorithm>

using namespace std;

int *ropes;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int rst;

    cin >> N;
    ropes = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> ropes[i];
    }
    sort(ropes, ropes + N, greater<>());
    rst = ropes[0];

    for (int i = 1; i < N; i++) {
        if (ropes[i] * (i + 1) >= rst) {
            rst = ropes[i] * (i + 1);
        }
    }    

    cout << rst;

    return 0;
}
