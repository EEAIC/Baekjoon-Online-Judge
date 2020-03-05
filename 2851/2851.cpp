#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rst = 0;
    int tmp;
    for (int i = 0; i < 10; i++) {
        cin >> tmp;
        if (rst + tmp >= 100) {
            if (100 - rst >= rst + tmp - 100) {
                rst += tmp;                       
            }     
            break;
        } else {
            rst += tmp;
        }
    }

    cout << rst;
    
    return 0;
}