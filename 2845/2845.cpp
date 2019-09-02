#include <iostream>

using namespace std;

int main() {
    int L, P, total, tmp;
    cin >> L >> P;
    total = L * P;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        cout << tmp - total << " ";
    }

    return 0;
}