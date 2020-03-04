#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int tmp;

    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        sum += tmp;
    }

    cout << sum / 60 << "\n";
    cout << sum % 60;

    return 0;
}