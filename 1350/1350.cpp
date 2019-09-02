#include <iostream>

using namespace std;

int main() {
    long long int N, cluster;
    long long int *size = new long long int[N];
    long long int rst = 0;
    cin >> N;
    for (long long int i = 0; i < N; i++) {
        cin >> size[i];
    }

    cin >> cluster;
    for (long long int j = 0; j < N; j++) {
        if (size[j]) {     
            if (size[j] % cluster) {
                rst += size[j] / cluster + 1;
            } else {
                rst += size[j] / cluster;
            }
        }
    }

    cout << rst * cluster;
    return 0;
}