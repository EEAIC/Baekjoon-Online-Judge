#include <iostream>

using namespace std;

int main() {
    int n[30] = {0,};
    int tmp;

    for (int i = 0; i < 28; i++) {
        cin >> tmp;
        n[tmp - 1] = 1;
    }

    for (int i = 0; i < 30; i++) {
        if (n[i] != 1) cout << i + 1 << "\n";
    }

    return 0;
}