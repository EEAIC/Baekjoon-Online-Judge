#include <iostream>
#include <tuple>

using namespace std;

int main() {
    int N, K, index;
    int rank = 0;
    cin >> N >> K;


    tuple<int, int, int>* nation = new tuple<int, int, int>[N]; //gold, silver, bronze

    for (int i = 0; i < N; i++) {
        cin >> index;
        cin >> get<0>(nation[index - 1]) >> get<1>(nation[index - 1]) >> get<2>(nation[index - 1]);
    }

    for (int i = 0; i < N; i++) {
        if (get<0>(nation[i]) > get<0>(nation[K - 1])){
            rank += 1;
        } else if (get<0>(nation[i]) == get<0>(nation[K - 1])) {
            if (get<1>(nation[i]) > get<1>(nation[K - 1])) {
                rank += 1;
            } else if (get<1>(nation[i]) == get<1>(nation[K - 1])) {
                if (get<2>(nation[i]) > get<2>(nation[K - 1])) {
                    rank += 1;
                }
            }
        }   
    }

    cout << rank + 1;

    return 0;
}