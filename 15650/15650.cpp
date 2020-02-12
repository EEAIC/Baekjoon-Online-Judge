#include <iostream>

using namespace std;

int *arr;

void n_and_m(int pos, int n, int m) {
    for (int i = 1; i <= n; i++) {
        bool continue_flag = false;
        for (int j = 0; j < pos; j++) {
            if (arr[j] >= i)  {
                continue_flag = true;
                break;
            }
        }

        if (continue_flag) continue;

        arr[pos] = i;
        if (m > 1) {
            n_and_m(pos + 1, n, m - 1);
        } else {
            for (int i = 0; i < pos; i++) {
                cout << arr[i] << " ";
            }
            cout << arr[pos] << "\n";
        }
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    arr = new int[M];
    n_and_m(0, N, M);

    return 0;
}