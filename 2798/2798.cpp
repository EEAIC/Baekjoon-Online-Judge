#include <iostream>

using namespace std;

int main() {
    int N, M;
    int c, sum;
    
    cin >> N >> M;
    int *n = new int[N];
    for (int i = 0; i < N; i++) {
       cin >> n[i]; 
    }

    c = abs(M - (n[0] + n[1] + n[2]));
    sum = n[0] + n[1] + n[2];
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N ; k++) {
                if (n[i] + n[j] + n[k] <= M) {
                    if (abs(M - (n[i] + n[j] + n[k])) < c) {
                        sum = n[i] + n[j] + n[k];
                        c = abs(M - (n[i] + n[j] + n[k]));
                    }
                }
            }
        }
    }

    cout << sum;

    return 0;
}