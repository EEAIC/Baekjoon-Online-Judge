#include <iostream>

using namespace std;

int main() {
    int A, B, C, rst = 0;
    int times[100] = { 0,};
    int arrive, leave;
    
    cin >> A >> B >> C;
    B *= 2;
    C *= 3;
    for (int i = 0; i < 3; i++) {
        cin >> arrive >> leave;
        for (int j = arrive - 1; j < leave - 1; j++) {
            times[j]++;
        }
    }

    for (int i = 0; i < 100; i++) {
        switch (times[i])
        {
        case 1:
            rst += A;
            break;
        case 2:
            rst += B;
            break;
        case 3:
            rst += C;
            break;
        }
    }

    cout << rst;

    
    return 0;
}
