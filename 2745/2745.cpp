#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string N;
    string::reverse_iterator rit;
    int B, tmpNum;
    int rst = 0;
    int i = 0;
    cin >> N >> B;
    for (rit = N.rbegin(); rit != N.rend(); ++rit, i++) {
        if ('0' <= *rit && *rit <= '9') tmpNum = *rit - '0';
        else if ('A' <= *rit && *rit <= 'Z') tmpNum = *rit - '7';
        rst += tmpNum * (int)pow(B, i);
    }

    cout << rst;

    return 0;
}