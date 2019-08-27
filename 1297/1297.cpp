#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double X, A, B, ratio;
    cin >> X >> A >> B;
    ratio = sqrt(X * X / (A * A + B * B)); 
    cout << floor(A * ratio) << " " << floor(B * ratio);

    return 0;
}