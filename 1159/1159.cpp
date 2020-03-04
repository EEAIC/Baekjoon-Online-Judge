#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    bool predaja = true;
    string tmp;
    map<char, int> list;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (list.find(tmp[0]) != list.end()) {
            list[tmp[0]] += 1;
        } else {
            list.insert(pair<char, int>(tmp[0], 1));
        }
    } 


    for (map<char, int>::iterator mit = list.begin(); mit != list.end(); ++mit) {
        if (mit->second >= 5) {
            cout << mit->first;
            predaja = false;
        }
    }

    if (predaja) {
        cout << "PREDAJA";
    }

    return 0;
}