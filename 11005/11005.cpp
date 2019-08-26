#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string rst;
    string::reverse_iterator rit;
    int N, B, tmp;
    cin >> N >> B;
    int i = 0;
    while(N != 0){
        tmp = N % B;
        if (tmp >= 10) {
            tmp += '7';
        } else {
            tmp += '0';
        }
        rst.push_back(tmp);
        N = N / B;
    }

    for (rit = rst.rbegin(); rit != rst.rend(); ++rit) {
        cout << *rit;
    }
    return 0;
}