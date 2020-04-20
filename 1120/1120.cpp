#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string X, Y;
    int rst = 50, tmp = 0;
    cin >> X >> Y;
    
    for (int j = 0; j <= Y.size() - X.size(); j++) {
        tmp = 0;
        for (int i = 0; i < X.size(); i++) {
            if (X[i] != Y[i + j]) {
                tmp += 1;
            }
        }
        if (rst > tmp) rst = tmp;
    }
    
    cout << rst;

    return 0;
}
