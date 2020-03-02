#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int train = 0;
    int out, in;

    for (int i = 0; i < 4; i++) {
        cin >> out >> in;

        train = train - out + in;
        if (train > max) max = train;
    }

    cout << max;

    return 0;
}