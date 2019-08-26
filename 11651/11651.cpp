#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, X, Y;
    cin >> N;
    vector<pair<int, int>> vec;
    vector<pair<int,int>>::iterator vit;
    for (int i = 0; i < N; i++){
        cin >> X >> Y;
        vec.push_back(make_pair(Y, X));
    }

    sort(vec.begin(), vec.end());

    for (vit = vec.begin(); vit != vec.end(); ++vit) {
        cout << vit->second << " " << vit->first << "\n";
    }
}