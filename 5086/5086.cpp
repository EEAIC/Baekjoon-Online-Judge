#include <iostream>

using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B && (A != 0 && B!= 0)){
        if (A < B && B % A == 0) {
            cout << "factor\n";
        } else if (A > B && A % B == 0) {
            cout << "multiple\n";
        } else {
            cout << "neither\n";
        }
    }
    return 0;
}