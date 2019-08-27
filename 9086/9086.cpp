#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    string str;
    for (int i = 0; i < T; i++) {
        cin >> str;
        cout << str.front() << str.back() << "\n";
    }
    return 0;
}