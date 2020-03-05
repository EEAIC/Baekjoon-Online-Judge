#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string A, B, op;

    cin >> A >> op >> B;

    if (op == "+") {
        if (A.length() > B.length()) {
            A[A.length() - B.length()] = B[0];
            cout << A;
        } else if (A.length() == B.length()) {
            cout << A[0] - '0' + B[0] - '0';
            for (int i = 1; i < A.length(); i++) {
                cout << A[i];
            }
        } else {
            B[B.length() - A.length()] = A[0];
            cout << B;
        }
    } else {
        cout << A;
        for (int i = 1; i < B.length(); i++) {
            cout << B[i];
        }
    }

    return 0;
}