#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, digit;
    int rst = 0;
    cin >> N;
    digit = floor(log10(N)) + 1;

    rst += digit * (N - pow(10, digit - 1) + 1);

    for (int i = 1; i < digit; i++) {
       rst += i * (pow(10, i) - pow(10, i - 1));
    }

    cout << rst;
    return 0;
}