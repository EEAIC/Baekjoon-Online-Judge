#include <iostream>

using namespace std;

int *mem; 

int main() {
    int X;
    cin >> X;

    mem = new int[X + 1];
    for (int i = 0; i < X + 1; i++) {
        mem[i] = 0;
    }

    for (int i = X; i > 0; i--) {
        if (i % 3 == 0) {
            if (mem[i / 3] == 0 || mem[i / 3] > mem[i] + 1) {
                mem[i / 3] = mem[i] + 1;
            }
        }

        if (i % 2 == 0) {
            if (mem[i / 2] == 0 || mem[i / 2] > mem[i] + 1) {
                mem[i / 2] = mem[i] + 1;
            }
        }

        if (mem[i - 1] == 0 || mem[i - 1] > mem[i] + 1) {
            mem[i - 1] = mem[i] + 1;
        }
    }

    cout << mem[1];

    return 0;
}