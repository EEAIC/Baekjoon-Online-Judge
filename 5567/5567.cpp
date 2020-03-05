#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int a, b;

    cin >> n >> m;

    set<int> friends;
    vector<int> *cy = new vector<int>[n];

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cy[a - 1].push_back(b - 1);
        cy[b - 1].push_back(a - 1);
    }

    for (vector<int>::iterator it = cy[0].begin(); it != cy[0].end(); ++it) {
        friends.insert(*it);
        for (vector<int>::iterator jt = cy[*it].begin(); jt != cy[*it].end(); ++jt) {
            if (*jt != 0) {
                friends.insert(*jt);
            }
        }
    }
    
    cout << friends.size();

    return 0;
}