#include <iostream>

using namespace std;

int *stairs;
int **scores;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    stairs = new int[N + 1];
    scores = new int*[N + 1];

    for (int i = 0; i < N + 1; i++) {
        scores[i] = new int[3];
    }

    stairs[0] = 0;      // 시작점 점수
    scores[0][0] = 0;   // 총 점수의 최대값
    scores[0][1] = 0;   // 이전 단계에 한 계단 올라온 경우
    scores[0][2] = 0;   // 이전 단계에 두 계단 올라온 경우

    for (int i = 1; i < N + 1; i++) {
        cin >> stairs[i]; 
        scores[i][0] = 0;    
    }


    for (int i = 1; i < N + 1; i++) {
        if (i <= 2) { 
            scores[i][1] = scores[i - 1][1] + stairs[i];
        } else {
            scores[i][1] = scores[i - 1][2] + stairs[i];
        }
        
        if (i > 1) {
            if (scores[i - 2][1] > scores[i - 2][2]) {
                scores[i][2] = scores[i - 2][1] + stairs[i]; 
            } else {
                scores[i][2] = scores[i - 2][2] + stairs[i];
            }
        }

        if (scores[i][1] > scores[i][2]) {
            scores[i][0] = scores[i][1];
        } else {
            scores[i][0] = scores[i][2];
        }
    } 

    cout << scores[N][0];

    return 0;
}