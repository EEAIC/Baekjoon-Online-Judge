#include <iostream>
#include <tuple>
#include <algorithm>


using namespace std;

bool compare(tuple<string, int, int, int> first, tuple<string, int, int, int> second) {
    if (get<1>(first) > get<1>(second)) {
        return true;
    } else if (get<1>(first) == get<1>(second)) {
        if (get<2>(first) < get<2>(second)) {
            return true;
        } else if (get<2>(first) == get<2>(second)) {
            if (get<3>(first) > get<3>(second)) {
                return true;
            } else if (get<3>(first) == get<3>(second)) {
                if (get<0>(first) < get<0>(second)) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    tuple<string, int, int, int>* students = new tuple<string, int, int, int>[N];

    for (int i = 0; i < N; i++) {
        cin >> get<0>(students[i]) >> get<1>(students[i]) >> get<2>(students[i]) >> get<3>(students[i]);
    }

    sort(students, students + N, compare);

    for (int i = 0; i < N; i++) {
        cout << get<0>(students[i]) << "\n";
    }

    return 0;
}