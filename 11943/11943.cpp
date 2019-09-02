#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, A_apple, A_orange;
    cin >> A >> B >> C >> D;
    A_apple = B + C;
    A_orange = A + D;
    
    if (A_apple >= A_orange) cout << A_orange;
    else cout << A_apple;

    return 0;
}