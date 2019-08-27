#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int, 4> arr;
    for (int i = 0 ; i < 4; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << arr[0] * arr[2];

    return 0;
}