#include <iostream>

using namespace std;

int main() {
    int N;
    int cnt = 0;
    cin >> N;
    while(N != 0) {
       cnt += N % 2;
       N /= 2;
    }
    cout << cnt;
    return 0;
}