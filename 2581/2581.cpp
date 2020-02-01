#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, min_pf;
    int sum_pf = 0;

    cin >> M >> N;

    vector<int> prime_factor;

    for (int i = 2; i <= N; i++) {
        bool is_pf = true;
        for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
            if (i % *pf_it == 0 && i != *pf_it) {
                is_pf = false;
                break;
            }
        }
        if(is_pf) prime_factor.push_back(i); 
    }

    bool is_min = true;
    for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
        if (*pf_it >= M) {
            if (is_min) {
                min_pf = *pf_it;
                is_min = false;
            }
            sum_pf += *pf_it;
        }
    }

    if (sum_pf != 0) {
        cout << sum_pf << "\n";
        cout << min_pf << "\n";
    } else {
        cout << -1 << "\n";
    }
    
    return 0;
}