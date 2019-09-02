#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    n = 1000 - n;
    while (n) {
        if (n >= 500) {
            cnt += n / 500;
            n = n % 500;
        } else if (n >= 100) {
            cnt += n / 100;
            n = n % 100; 
        } else if (n >= 50) {
            cnt += n / 50;
            n = n % 50;
        } else if (n >= 10) {
            cnt += n / 10;
            n = n % 10;
        } else if (n >= 5) {
            cnt += n / 5;
            n = n % 5;
        } else if (n >= 1) {
            cnt += n / 1;
            n = n % 1;
        }
    }

    cout << cnt;

    return 0;
}