#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

pair<int, int>* meeting;
stack<pair<int, int>> stk;

int main() {
    int N, start, finish;
    cin >> N;
    
    meeting = new pair<int, int>[N];
    

    for (int i = 0; i < N; i++) {
        cin >> start >> finish;
        meeting[i] = make_pair(start, finish);
    }

    sort(meeting, meeting + N);

    stk.push(meeting[0]);
    
    for (int i = 1; i < N; i++) {
        if (stk.top().second <= meeting[i].first) {
            stk.push(meeting[i]);
        } else if (stk.top().second >= meeting[i].second) {
            stk.pop();
            stk.push(meeting[i]);
        }
        
    }

    cout << stk.size() << "\n";

    return 0;
}