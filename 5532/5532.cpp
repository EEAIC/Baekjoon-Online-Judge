#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double L, A, B, C, D;

    cin >> L >> A >> B >> C >> D;

    if (A / C > B / D) {
        cout << L - ceil(A / C);
    } else {
        cout << L - ceil(B / D);
    }

    return 0;
}