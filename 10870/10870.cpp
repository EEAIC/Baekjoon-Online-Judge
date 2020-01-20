#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int tmp;
    int n;
    cin >> n;
    for (int i = 2; i < n + 1; i++) {
        tmp = b;
        b = a + b;
        a = tmp;
    }  
    
    if (n == 0) {
        cout << a;
    } else {
        cout << b;
    }
    return 0;
}