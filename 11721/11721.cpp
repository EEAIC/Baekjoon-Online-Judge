#include <iostream>
#include <string>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	getline(cin, str);

	for (unsigned int i = 1; i <= str.size(); i++) {
		cout << str.at(i - 1);
		if (i % 10 == 0) cout << "\n";
	}

	return 0;
}