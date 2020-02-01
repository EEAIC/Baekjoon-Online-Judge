#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool pair_compare(pair<int, int> first, pair<int, int> second) {
    if (first.second - first.first < second.second - second.first) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, num;
    cin >> T;

    int M, N;
    vector<int> prime_factor;
    vector<pair<int, int>> prime_factor_pair;

    for (int i = 2; i <= 10000; i++) {
        bool is_pf = true;
        for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
            if (i % *pf_it == 0 || i == *pf_it) {
                is_pf = false;
                break;
            }
        }
        if(is_pf) prime_factor.push_back(i); 
    }

    for (int i = 0; i < T; i++) {
        cin >> num;
        prime_factor_pair.clear();

        for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
            for (vector<int>::iterator pf_it_prime = pf_it; pf_it_prime != prime_factor.end(); ++pf_it_prime) {
                if ((*pf_it) + (*pf_it_prime) > num) break;
                if ((*pf_it) + (*pf_it_prime) == num) {
                    prime_factor_pair.push_back(make_pair(*pf_it, *pf_it_prime));
                    break;
                }
            }
        }

        sort(prime_factor_pair.begin(), prime_factor_pair.end(), pair_compare);

        cout << prime_factor_pair.front().first << " " << prime_factor_pair.front().second << "\n";


    }

    return 0;
}