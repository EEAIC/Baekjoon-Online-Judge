#include <iostream>

using namespace std;

inline int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int main() {
    int n, m;
    cin >> n;
    cin.ignore();
    cin >> m;

    if (n > m) {
       cout << n / gcd(n, m) << ":" << m / gcd(n, m);
    } else {
        cout << n / gcd(m, n) << ":" << m / gcd(m, n);
    }
    
    return 0;
}
