#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T, tmp;
    vector<int> vec;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> tmp;
        vec.push_back(tmp);
    }

    cout << *max_element(vec.begin(), vec.end()) * *min_element(vec.begin(), vec.end());
    
    return 0;
}