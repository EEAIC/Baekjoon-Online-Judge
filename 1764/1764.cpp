#include <iostream>
#include <set>

using namespace std;

int main() {
    int N, M;
    string tmp;
    set<string> N_set, M_set;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        N_set.insert(tmp);
    }

    for (int i = 0; i < M; i++) {
        cin >> tmp;
        if (N_set.insert(tmp).second == false) {
            M_set.insert(tmp);
        };
    }

    cout << M_set.size() << "\n";

    for (set<string>::iterator sit = M_set.begin(); sit != M_set.end(); ++sit) {
        cout << *sit << "\n";
    }

    return 0;
}