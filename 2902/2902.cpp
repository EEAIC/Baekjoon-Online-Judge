#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s.at(0);
	size_t found;
	found = s.find("-");
	while (found != string::npos) {
		cout << s.at(found + 1);
		found = s.find("-", found + 1);
	};

	return 0;
}