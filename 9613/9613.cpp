#include <iostream>

using namespace std;

int GCD(int a, int b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int rst;
    cin >> t;
    int n;
    for (int i =  0; i < t; i++) {
        rst = 0;
        cin >> n;
        int *arr = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        for (int k = 0; k < n; k++) {
            for (int l = k + 1; l < n; l++) {
                rst += GCD(arr[k], arr[l]);
            }
        }
        delete[] arr;
        cout << rst << "\n";
    }
    
    

    return 0;
}

int GCD(int a, int b) {
    int tmp;
    while(b){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}