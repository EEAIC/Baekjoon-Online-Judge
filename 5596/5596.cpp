#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int M = 0;
    int tmp;

    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        N += tmp;
    }

    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        M += tmp;
    }

    cout << ((N < M) ? M : N);
    return 0;
}