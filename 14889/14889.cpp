#include <iostream>
#include <vector>

using namespace std;

int **S;
int N;
int min_difference = -1;

int get_ability(vector<int> tmp) {
    int tmp_ability = 0;
        for (int i = 0; i < tmp.size(); i++) {
            for (int j = 0; j < tmp.size(); j++) {
                if (i != j) {
                    tmp_ability += S[tmp[i]][tmp[j]];
                }
            }
            
        }
    return tmp_ability;
}

void get_answer(int index, vector<int> A, vector<int> B) {
    if (index >= N) {
        if (A.size() == N / 2 && B.size() == N / 2) {
            if (abs(get_ability(A) - get_ability(B)) < min_difference || min_difference == -1) {
                min_difference = abs(get_ability(A) - get_ability(B));
            }
            return;
        } else {
            return;
        }
    } else {
        if (A.size() < N / 2) {
            A.push_back(index);
            get_answer(index + 1, A, B);
            A.pop_back();
        }

        if (B.size() < N / 2) {
            B.push_back(index);
            get_answer(index + 1, A, B);
            B.pop_back();
        }
    }
    return;
}


int main() {
    cin >> N;
    S = new int*[N];

    for (int i = 0; i < N; i++) {
        S[i] = new int[N];
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> S[i][j];
        }
    }

    vector<int> start;
    vector<int> link;

    get_answer(0, start, link);

    cout << min_difference;
    return 0;
}