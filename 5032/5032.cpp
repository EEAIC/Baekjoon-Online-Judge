#include <iostream>

using namespace std;

int main() {
    int e, f, c, emptyBottles, rst = 0;
    cin >> e >> f >> c;
    
    emptyBottles = e + f;

    while (emptyBottles >= c) {
        rst += emptyBottles / c;
        emptyBottles = emptyBottles / c + emptyBottles % c;
    }    

    cout << rst;

    return 0;
}
