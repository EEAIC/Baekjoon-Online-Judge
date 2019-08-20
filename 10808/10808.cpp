#include <iostream>
#include <string>

using namespace std;

int main() {
	int alphabets[26] = { 0, };

	string s;
	string::iterator it;
	cin >> s;
	for (it = s.begin(); it != s.end(); ++it) {
		alphabets[*it - 'a'] += 1;
	}

	for (auto alphabet : alphabets) {
		cout << alphabet << " ";
	}

	return 0;
}