#include <iostream>
#include <string>

using namespace std;

string make_same_digits(string bigger_A, string smaller_B);
string str_sum(string A, string B);
string get_complement(string A);
string trim_zero(string A);

int main() {
	string A, B;
	int carry = 0;
	bool all_negative = false;
	bool one_negative = false;
	bool all_positive = false;

	cin >> A >> B;

	if ((A.at(0) == '-') != (B.at(0) == '-')) {
		one_negative = true;

	}
	else if ((A.at(0) == '-') && (B.at(0) == '-')) {
		all_negative = true;
	}
	else {
		all_positive = true;
	}

	if (A.at(0) == '-') {
		A.erase(0, 1);

		if (one_negative) {
			if (A.size() > B.size()) {
				B = make_same_digits(A, B);
			}
			else {
				A = make_same_digits(B, A);
			}

			A = get_complement(A);
		}
	}

	if (B.at(0) == '-') {
		B.erase(0, 1);

		if (one_negative) {
			if (A.size() > B.size()) {
				B = make_same_digits(A, B);
			}
			else {
				A = make_same_digits(B, A);
			}

			B = get_complement(B);
		}
	}

	A = str_sum(A, B);
	carry = A.at(0) - '0';

	if (one_negative) {
		if (carry) {
			A = A.substr(1, A.size());
			cout << trim_zero(A);
		}
		else {
			A = get_complement(A.substr(1, A.size()));
			cout << '-';
			cout << trim_zero(A);
		}
	}
	else {
		if (all_negative) {
			cout << '-';
		}

		cout << trim_zero(A);
	}

	return 0;
}

string make_same_digits(string bigger_A, string smaller_B) {
	while (bigger_A.size() != smaller_B.size()) {
		smaller_B.insert(0, "0");
	}

	return smaller_B;
}

string str_sum(string A, string B) {
	string::reverse_iterator rit_A;
	string::reverse_iterator rit_B;
	int num;
	int carry = 0;
	rit_A = A.rbegin();
	rit_B = B.rbegin();

	while (rit_A != A.rend() || rit_B != B.rend()) {
		if (rit_A != A.rend() && rit_B != B.rend()) {
			num = *rit_A - '0' + *rit_B - '0' + carry;

			carry = num / 10;
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
				if (carry) {
					num = *rit_B - '0' + carry;
					carry = num / 10;
					*rit_B = num % 10 + '0';
					++rit_B;
				}
				else {
					break;
				}
			} else if (rit_B == B.rend()) {
				if (carry) {
					num = *rit_A - '0' + carry;
					carry = num / 10;
					*rit_A = num % 10 + '0';
					++rit_A;
				}
				else {
					break;
				}
			}
		}
	}


	return  to_string(carry) + (A.size() >= B.size() ? A : B);
}

string get_complement(string A) {
	string::iterator it_A;
	for (it_A = A.begin(); it_A != A.end(); ++it_A) {
		*it_A = 9 - (*it_A - '0') + '0';
	}

	A = str_sum(A, "1");

	if (A.at(0) != '0') {
		return A;
	}
	else {
		return A.substr(1, A.size());
	}
}

string trim_zero(string A) {
	if (A.find_first_not_of("0") == string::npos) {
		return "0";
	}
	else {
		return A.substr(A.find_first_not_of("0"), A.size());
	}
}