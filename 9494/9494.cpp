#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, pos;
    string tmpStr;
    while (true) {
        cin >> N;
        cin.ignore();
        if (N == 0) break;
        pos = 0;
        for (int i = 0; i < N; i++) {
            getline(cin, tmpStr);
            for (unsigned int i = pos; i <= tmpStr.length(); i++) {
                if (i == tmpStr.length() || tmpStr[i] == ' ') {
                    pos = i;
                    break;   
                }
            }
        }
        cout << pos + 1 << "\n";
    }

    return 0;
}