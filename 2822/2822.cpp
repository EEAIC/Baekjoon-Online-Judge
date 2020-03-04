#include <iostream>
#include <algorithm>

using namespace std;

bool compare_second(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) {
        return true;
    } else {
        return false;
    }
}

int main() {
    pair<int, int>* score = new pair<int, int>[8];
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        cin >> score[i].first;
        score[i].second = i + 1;
    }

    sort(score, score + 8);
    sort(score + 3, score + 8, compare_second);
    
    for (int i = 3; i < 8; i++) {
        sum += score[i].first;
    }

    cout << sum << "\n";

    for (int i = 3; i < 8; i++) {
        cout << score[i].second << " ";
    }
}