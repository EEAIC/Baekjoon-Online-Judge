#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int T;
	string rst, str;
	stack<char> stk;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> str;
		rst = "YES";
		for (unsigned int j = 0; j < str.size(); j++) {
			if (str.at(j) == '(') {
				stk.push('(');
			}
			else {
				if (!stk.empty()) {
					stk.pop();
				}
				else {
					rst = "NO";
					break;
				}
			}
		}

		if (!stk.empty()) {
			rst = "NO";
			while (!stk.empty()) {
				stk.pop();
			}
		}

		cout << rst << endl;
	}
	
	return 0;
}