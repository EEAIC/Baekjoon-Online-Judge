#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, tmp;
    cin >> N;

    int *num = new int[10000];
  
    for (int i = 0; i < 10000; i++) {
        num[i] = 0;    
    }

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        num[tmp - 1] += 1;
    }

    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < num[i]; j++) {
            cout << i + 1 << "\n";
        }
    }
    
    return 0;
}