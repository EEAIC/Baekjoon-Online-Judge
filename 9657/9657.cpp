#include <iostream>

using namespace std;

int arr[1001] = {0,};

int main() {
    int N;
    cin >> N;

    arr[1] = 1;
    arr[2] = -1;
    arr[3] = 1;
    arr[4] = 1;
    for (int i = 5; i <= N; i++) {
        if (arr[i - 4] == 1 && arr[i - 3] == 1 && arr[i - 1] == 1) {
            arr[i] = -1;
        } else {
            arr[i] = 1;
        }
    }

   
    if (arr[N] == 1) cout << "SK";
    else cout << "CY";
    return 0;
}