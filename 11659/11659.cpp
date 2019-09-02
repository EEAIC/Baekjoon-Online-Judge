#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, tmp, start, end;
    
    cin >> N >> M;
    int *arr = new int[N + 1];
    arr[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> tmp;
        arr[i] = arr[i - 1] + tmp;
    }

    for (int j = 0; j < M; j++) {
        cin >> start >> end;
        cout << arr[end] - arr[start - 1] << "\n";
    }

    return 0;
}