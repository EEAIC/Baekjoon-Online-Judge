#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string::iterator it;
	getline(cin, s);
	for (it = s.begin(); it != s.end(); ++it) {
		if ('A' <= *it && *it <= 'Z') {
			if (*it + 13 > 'Z') {
				cout << (char)(*it + 12 - 'Z' + 'A');
			} else {
				cout << (char)(*it + 13);
			}	
		}
		else if ('a' <= *it && *it <= 'z') {
			if (*it + 13 > 'z') {
				cout << (char)(*it + 12 - 'z' + 'a');
			}
			else {
				cout << (char)(*it + 13);
			}
		}
		else {
			cout << *it;
		}
	}

	return 0;
}