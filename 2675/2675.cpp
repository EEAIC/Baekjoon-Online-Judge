#include <iostream>
#include <string>

using namespace std;

int main() {
	int T, repeat;
	string word;
	string repeated_char;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> repeat >> word;
		for (int j = 0; j < word.size(); j++) {
			repeated_char.erase(repeated_char.begin(), repeated_char.end());
			for (int k = 0; k < repeat; k++) {
				repeated_char += word.at(j);
			}
			cout << repeated_char;
		}
		cout << endl;
	}
	return 0;
}