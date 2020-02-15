#include <iostream>

using namespace std;

int main() {
    int M, input_cup_first, input_cup_second;
    int pos = 1;
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> input_cup_first >> input_cup_second;
        if (input_cup_first == pos) {
            pos = input_cup_second;
        } else if (input_cup_second == pos) {
            pos = input_cup_first;
        }
    }

    cout << pos;
    
    return 0;
}