#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double PI = acos(-1);
    int R;
    cin >> R;
    cout.precision(6);
    cout << fixed << PI * R * R <<  "\n" << (double) 2 * R * R;
    return 0;
}