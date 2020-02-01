#include <iostream>
#include <vector>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, num_pf;
    int last_start = 2;
    vector<int> prime_factor;

    for (int i = 2; i <= 123456 * 2; i++) {
        bool is_pf = true;
        for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
            if (i % *pf_it == 0 || i == *pf_it) {
                is_pf = false;
                break;
            }
        }
        if(is_pf) prime_factor.push_back(i); 
    }

    while(1) {
        cin >> M;
        if (M == 0) break;

        N = 2 * M;
        num_pf = 0;

        for (vector<int>::iterator pf_it = prime_factor.begin(); pf_it != prime_factor.end(); ++pf_it) {
            if (N >= *pf_it && *pf_it > M) {
                num_pf += 1;
            }

            if (*pf_it > N) break;
        }

        cout << num_pf << "\n";
    }

    return 0;
}