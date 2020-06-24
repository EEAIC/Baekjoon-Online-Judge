#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int sketch[r2 - r1 + 1][c2 - c1 + 1];   // (y, x)

    pair<int, int> direction(1, 0);
    pair<int, int> point(0, 0); // (x, y)
    int pointValue = 1;
    int directionDistance = 1;
    int numOfFoundValue = 0;
    int maxPointValue = -1; 

    while(numOfFoundValue < (r2 - r1 + 1) * (c2 - c1 + 1)) {
        for (int tmpDistance = directionDistance; tmpDistance > 0; tmpDistance--, pointValue++) {
            // point와 pointValue 확인
            if(c1 <= point.first && point.first <= c2 && r1 <= point.second && point.second <= r2 ) {
                sketch[point.second - r1][point.first - c1] = pointValue;
                numOfFoundValue++;
                maxPointValue = max(maxPointValue, pointValue);
            }
            
            point.first += direction.first;
            point.second += direction.second;
        }

        if (direction == make_pair(1, 0)) {    // 오른쪽 진행
            direction = make_pair(0, -1);
        } else if (direction == make_pair(0, -1)) {   // 위쪽 진행
            direction = make_pair(-1, 0);
            directionDistance++;
        } else if (direction == make_pair(-1, 0)) {   // 왼쪽 진행
            direction = make_pair(0, 1);
        } else {    // 아래쪽 진행
            direction = make_pair(1, 0);
            directionDistance++;
        }
    }

    for(int i = 0; i < r2 - r1 + 1; i++) {
        for (int j = 0; j < c2 - c1 + 1; j++) {
            cout << setfill(' ') << setw(static_cast<int>(log10(maxPointValue) + 1));
            cout << sketch[i][j];
            if (j != c2 - c1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
