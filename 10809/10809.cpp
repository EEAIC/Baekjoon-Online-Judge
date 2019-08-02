#include <iostream>
#include <string>

using namespace std;

int main() {
	int alphabets[26];
	fill_n(alphabets, 26, -1);
	string word;
	
	cin >> word;
	
	for (int i = 0; i < word.size(); i++) {
		if (alphabets[word.at(i) - 'a'] == -1) {
			alphabets[word.at(i) - 'a'] = i;
		}
	}
	
	for (auto alphabet : alphabets) {
		cout << alphabet << " ";
	}
	return 0;
}