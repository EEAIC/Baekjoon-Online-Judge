#include <iostream>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> i, pair<int, string> j) {
    return (i.first < j.first);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, bottles;
    string school;
    pair<int, string> *yangjojang;
    
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        yangjojang = new pair<int, string>[N];
        for (int j = 0; j < N; j++) {
            cin >> school;
            cin >> bottles;
            yangjojang[j] = make_pair(bottles, school);
        }

        nth_element(yangjojang, yangjojang + N - 1, yangjojang + N, compare);
        
        cout << yangjojang[N - 1].second << "\n";
        delete[] yangjojang;
        yangjojang = NULL;
    }

    return 0;
}