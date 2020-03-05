#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, N, max, credit;
    double avg, grade;
    cin >> T;

    for (int i = 0; i < T; i++) {
        avg = 0;
        max = 0;
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> credit >> grade;
            avg += credit * grade;
            max += credit;
        }
        avg /= (double)max;
        cout << fixed;
        cout.precision(1);
        cout << max << " " << avg << "\n"; 
    }

    return 0;
}