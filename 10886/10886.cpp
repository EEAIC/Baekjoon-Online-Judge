#include <iostream>

using namespace std;

int main() {
    int N, tmp;
    int rst = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (tmp == 1) {
            rst += 1;
        } else {
            rst -= 1;
        }
    }

    if (rst > 0) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";

    return 0;
}