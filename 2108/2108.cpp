#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>

using namespace std;

int *num;
map<int, int> mp;
vector<int> vec(0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    double tmp;
    int sum = 0;
    int max_freq = 0;
    cin >> N;
    num = new int[N];

    for(int i = 0; i < N; i++) {
        cin >> tmp;
        sum += tmp;
        num[i] = tmp;
        if (mp[tmp]) {
            mp[tmp] += 1;
        }
        else {
            mp[tmp] = 1;
        }

    }

    for (auto m: mp) {
        if (m.second > max_freq) {
            vec.clear();
            vec.push_back(m.first);
            max_freq = m.second;
        } else if (m.second == max_freq) {
            vec.push_back(m.first);
        }
    }


    sort(num, num + N);
   

    cout << round(sum / (double)N) << "\n";
    cout << num[N / 2] << "\n";

    if (vec.size() == 1){
        cout << vec.at(0) << "\n";    
    } else {
        sort(vec.begin(), vec.end());
        cout << vec.at(1) << "\n";
    }
    cout << num[N - 1] - num[0] << "\n";


    return 0;
}