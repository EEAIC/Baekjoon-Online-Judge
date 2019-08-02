#include <iostream>
#include <string>
using namespace std;

int main() {
	int words = 1;
	string sentence;
	getline(cin, sentence);

	for (unsigned int i = 1; i < sentence.size() - 1; i++) {
		if (sentence.at(i) == ' ') { words += 1; }
	}

	if (sentence.size() == 1 && sentence.at(0) == ' ') {
		words = 0;
	}

	cout << words;
	return 0;
}