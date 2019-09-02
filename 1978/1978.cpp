#include <iostream>

using namespace std;

int main() {
    int N, num, A;
    int cnt = 0;
    bool flag = true;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> num;
        A = num;
        flag = true;
        for (int j = 2; j < A; j++) {
            if (num % j == 0) {
                flag = false;
                break;
            }
            A = num / j;
        }

        if (num != 1 && flag) ++cnt;
    }

    cout << cnt;

    return 0;
}