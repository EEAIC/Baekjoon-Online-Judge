#include <iostream>

using namespace std;

int main() {
    int N, K, min;
    int rst = 0;
    cin >> N >> K;

    int sieve[N + 1] = { 0, };
    min = 2;
    for (int min = 2; N >= min; min++) {
        if (sieve[min] == 0) {
            for(int i = 1; N >= min * i; i++) {
                if (sieve[min * i] == 0) {
                    sieve[min * i] = -1;
                    ++rst;
                    if (rst == K) {
                        cout << min * i;
                        return 0;
                    }
                }
            }
        }
    }
    
    return 0;
}