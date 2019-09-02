#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int S, rst;
    cin >> S;
    if (S > 1) {
        for (rst = floor(sqrt(2 * S)) - 1; rst * (rst + 1) <= 2 * S; rst++);
        --rst;
    } else {
        rst = 1;
    }
    cout << rst;

    return 0;
}