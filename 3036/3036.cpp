#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b): a;
}

int main() {
    int N, A, tmp, tmp_d;
    cin >> N;
    cin >> A;
    for (int i = 1; i < N; i++) {
        cin >> tmp;
        if (A >= tmp) tmp_d = gcd(A, tmp);
        else tmp_d = gcd(tmp, A);
        cout << A / tmp_d << "/" << tmp / tmp_d << "\n";
    }

    return 0;
}