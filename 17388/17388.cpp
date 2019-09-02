#include <iostream>

using namespace std;

int main() {
    int S, K, H, tmp;
    cin >> S >> K >> H;
    if (S + K + H >= 100) cout << "OK";
    else {
        tmp = min(min(S, K), H);
        if (S == tmp) cout << "Soongsil";
        else if (K == tmp) cout << "Korea";
        else cout << "Hanyang";
    } 
    
    return 0;
}