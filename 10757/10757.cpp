#include <iostream>
#include <string>

using namespace std;

int main() {
	string A, B;
	string::reverse_iterator rit_A;
	string::reverse_iterator rit_B;
	string::reverse_iterator rit_end;
	int num;
	int up = 0;
	cin >> A >> B;
	rit_A = A.rbegin();
	rit_B = B.rbegin();
	while (rit_A != A.rend() || rit_B != B.rend()) {
		if (rit_A != A.rend() && rit_B != B.rend()) {
			num = *rit_A - '0' + *rit_B - '0' + up;
			up = num / 10;
			if (A.size() >= B.size()) {
				*rit_A = num % 10 + '0';
			}
			else {
				*rit_B = num % 10 + '0';
			}
			++rit_A;
			++rit_B;
		}
		else {
			if (rit_A == A.rend()) {
				if (up) {
					num = *rit_B - '0' + up;
					up = num / 10;
					*rit_B = num % 10 + '0';
					++rit_B;
				}
				else {
					break;
				}
			} else if (rit_B == B.rend()) {
				if (up) {
					num = *rit_A - '0' + up;
					up = num / 10;
					*rit_A = num % 10 + '0';
					++rit_A;
				}
				else {
					break;
				}
			}
		}
	}

	if (up) cout << up;

	cout << (A.size() >= B.size() ? A : B);

	return 0;
}