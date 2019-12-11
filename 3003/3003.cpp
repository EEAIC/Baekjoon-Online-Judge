#include <iostream>

using namespace std;

int main() {
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int s;
    for(int i = 0; i < 6; i++) {
        cin >> s;
        cout << chess[i] - s << " ";
    }

    return 0;
}