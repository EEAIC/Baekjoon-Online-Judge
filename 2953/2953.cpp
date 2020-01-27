#include <iostream>

using namespace std;

int main() {
    int tmp;
    int tmp_sum = 0;
    int rst_num = 1;
    int rst_sum = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            tmp_sum += tmp;
        }
        if (tmp_sum > rst_sum) {
            rst_num = i;
            rst_sum = tmp_sum;
        }
        tmp_sum = 0;
    }

    cout << rst_num << " " << rst_sum;

    return 0;
}