#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int count = 0;
    string tmp;
    cin >> N;
    
    for (int i = 666; true; i++) {
        if (to_string(i).find("666") != string::npos) {
            ++count;
            if (count == N) {
                cout << i;
                break;
            }

        }
    }

    return 0;
}