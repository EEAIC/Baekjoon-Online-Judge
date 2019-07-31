#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int word_count = 0;
	string croatia_words[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string croatia_replace[8] = { "!", "!", "!", "!", "!", "!", "!", "!" };
	string word;
	getline(cin, word);

	for (int i = 0; i < 8; i++) {
		string replace_word = croatia_words[i];
		while (word.find(replace_word) != string::npos) {
			word.replace(word.find(replace_word), replace_word.length(), croatia_replace[i]);
		}
	}
	
	cout << word.size();

	return 0;
}