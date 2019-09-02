#include <iostream>

using namespace std;

int main() {
    long long int N;
    cin >> N;
    if (N % 4 == 1 || N % 4 == 3) {
        cout << "SK";
    } else {
        cout << "CY";
    }

    return 0;
}