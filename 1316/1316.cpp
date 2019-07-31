#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isGroupWord(string word, vector<char> alphabet);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	int rst = 0;
	string word;
	vector<char> alphabet;
	vector<char>::iterator it;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> word;
		if(isGroupWord(word, alphabet)) rst += 1;
	}

	cout << rst;
	return 0;
}

bool isGroupWord(string word, vector<char> alphabet) {
	vector<char>::iterator it;
	it = alphabet.begin();
	alphabet.insert(it, word.at(0));
	for (unsigned int j = 1; j < word.size(); j++) {
		if (word.at(j) != word.at(j - 1)) {
			it = find(alphabet.begin(), alphabet.end(), word.at(j));
			if (it == alphabet.end()) {
				alphabet.insert(it, word.at(j));
			}
			else {
				return false;
			}
		}
	}

	return true;
}
