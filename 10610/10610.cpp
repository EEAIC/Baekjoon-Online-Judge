#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string N;
    int sum = 0;
    cin >> N;

    for (string::iterator sit = N.begin(); sit != N.end(); ++sit) {
        sum += *sit - '0';
    }

    if (sum % 3) {  // 3의 배수 확인
        cout << -1;
        return 0;
    } else {
        sort(N.begin(), N.end(), greater<>());
    }

    if (N.back() != '0') {
        cout << -1;
    } else {
        cout << N;
    }

    return 0;
}
