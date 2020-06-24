#include <iostream>

using namespace std;

int cageSize;
int **cage;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> cageSize;

    cage = new int*[cageSize];
    for (int i = 0; i < cageSize; i++) {
        cage[i] = new int[3];   // 1: 1번 라인에 사자가 있는 경우 2: 2번 라인에 사자 0: 사자가 없는 경우
    }

    cage[0][0] = 1;
    cage[0][1] = 1;
    cage[0][2] = 1;

    for (int i = 1; i < cageSize; i++) {
        cage[i][0] = (cage[i - 1][0] + cage[i - 1][1] + cage[i - 1][2]) % 9901;
        cage[i][1] = (cage[i - 1][0] + cage[i - 1][2]) % 9901;
        cage[i][2] = (cage[i - 1][0] + cage[i - 1][1]) % 9901;
    }

    cout << (cage[cageSize - 1][0] + cage[cageSize - 1][1] + cage[cageSize - 1][2]) % 9901;

    return 0;
}
