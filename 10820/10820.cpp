#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string::iterator it;
	int small_letter, captial_letter, number, space;

	while (getline(cin, s) && !cin.eof()) {
		small_letter = 0;
		captial_letter = 0;
		number = 0;
		space = 0;

		

		for (it = s.begin(); it != s.end(); ++it) {
			if ('A' <= *it && *it <= 'Z') {
				captial_letter++;
			}
			else if ('a' <= *it && *it <= 'z') {
				small_letter++;
			}
			else if ('0' <= *it && *it <= '9') {
				number++;
			}
			else {
				space++;
			}
		}

		cout << small_letter << " " << captial_letter << " " << number << " " << space << "\n";
	}
	return 0;
}