#include <iostream>
#include <string>

using namespace std;

int main() {
    string C;
    int A, B;
    cin >> A >> B >> C;
    cout << ((C.back() - '0') % 2 ? A ^ B : A);
    return 0;
}