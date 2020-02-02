#include <iostream>

using namespace std;

long long int *num = new long long int[91];

long long int fibo(long long int a) {
    if (num[a] != -1) return num[a];

    num[a] = fibo(a - 1) + fibo(a - 2);

    return num[a];
}

int main() {
    long long int n;
    cin >> n;

    for (int i = 0; i < 91; i++) {
        num[i] = -1; 
    }
    
    num[0] = 0;
    num[1] = 1;
    
    cout << fibo(n);
    
    return 0;
}