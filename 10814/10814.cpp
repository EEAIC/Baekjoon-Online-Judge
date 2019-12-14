#include <iostream>
#include <algorithm>

using namespace std;

pair<int, string> *members;

bool compare_age(pair<int, string> i, pair<int, string> j) {
    return (i.first < j.first);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, age;
    string name;
    cin >> N;
    members = new pair<int, string>[N];
    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        members[i].first = age;
        members[i].second = name;
    }

    stable_sort(members, members + N, compare_age);

    for (int i = 0; i < N; i++) {
        cout << members[i].first << " ";
        cout << members[i].second << "\n";
    }   

    return 0;
}