#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int totalSeconds = (A * 3600 + B * 60 + C + D) % 86400;
    cout << totalSeconds / 3600 << " " << totalSeconds % 3600 / 60 << " " << totalSeconds % 60;

    return 0;
}
