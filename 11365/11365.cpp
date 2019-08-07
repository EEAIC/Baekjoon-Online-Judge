#include <iostream>
#include <string>

using namespace std;

int main() {
	string str = "";
	string::reverse_iterator rit;
	while (getline(cin, str) && str.compare("END") != 0) {		
		for (rit = str.rbegin(); rit != str.rend(); ++rit) {
			cout << *rit;
		}
		cout << "\n";
	}

	return 0;
}