#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> mp;
    map<string, int>::iterator imp;
    int t, n, rst;
    string cloth, kind;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        mp.clear();
        rst = 1;
        for (int j = 0; j < n; j++) {
            cin >> cloth;
            cin >> kind;
            if(mp[kind]) mp[kind] += 1;
            else mp[kind] = 1;
        }
        for(imp = mp.begin(); imp != mp.end(); ++imp) {
            rst *= imp->second + 1;
        }
        cout << rst - 1 << "\n";
    }

    return 0;
}