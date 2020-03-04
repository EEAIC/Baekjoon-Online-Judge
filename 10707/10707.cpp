#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, P, A_total, B_total;
    cin >> A >> B >> C >> D >> P;

    A_total = A * P;
    B_total = (P <= C) ? (B) : (B + ((P - C) * D));
    
    cout << ((A_total < B_total) ? (A_total) : (B_total));
    return 0;
}