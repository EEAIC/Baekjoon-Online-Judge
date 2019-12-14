#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, D, dog;
    int deliverys[3];
    cin >> A >> B >> C >> D;

    for (auto delivery: deliverys) {
        dog = 0;
        cin >> delivery;
        if (A >= delivery % (A + B) && delivery % (A + B)  > 0) {
            ++dog;
        }

        if (C >= delivery % (C + D) && delivery % (A + B)  > 0) {
            ++dog;
        }

        cout << dog << "\n";
    }
    return 0;
}