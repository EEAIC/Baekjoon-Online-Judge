#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentence;
	while (!cin.eof()) {
		getline(cin, sentence);
		cout << sentence << endl;
	}

	return 0;
}