#include <iostream>

using namespace std;

bool isValidMatch(int nameA, int nameB) {
    if (nameA % 2 == 1 && nameB % 2 == 0) {
        return nameB - nameA == 1;
    } else if (nameA % 2 == 0 && nameB % 2 == 1) {
        return nameA - nameB == 1;
    } else {
        return false;
    }
}

int getNextNumber(int name) {
    if (name % 2) {
        return name / 2 + 1;
    } else {
        return name / 2;
    }
}

int main() {
    int N, kim, lim, round = 1;
    cin >> N >> kim >> lim;

    while(!isValidMatch(kim, lim)) {
        kim = getNextNumber(kim);
        lim = getNextNumber(lim);
        round++;
    }
    
    cout << round;

    return 0;
}
