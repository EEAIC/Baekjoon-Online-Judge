#include <iostream>

using namespace std;

int main() {
    int d;
    int rst = 0;
    int n[5];
    cin >> d;
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
    
    for (int i = 0; i < 5; i++) {
        if (d == n[i]) rst += 1;
    }

    cout << rst;

    return 0;
}