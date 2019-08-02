#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string rst, str;
	stack<char> stk;
	
	while(getline(cin, str) && str != "."){
		rst = "yes";
		for (unsigned int j = 0; j < str.size(); j++) {
			if (str.at(j) == '(') {
				stk.push('(');
			} else if (str.at(j) == '[') {
				stk.push('[');
			} else if (str.at(j) == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				}
				else {
					rst = "no";
					break;
				}
			} else if (str.at(j) == ']') {
				if (!stk.empty() && stk.top() == '[') {
					stk.pop();
				}
				else {
					rst = "no";
					break;
				}
			}
		}

		if (!stk.empty()) {
			rst = "no";
			while (!stk.empty()) {
				stk.pop();
			}
		}
		cout << rst << endl;
	}

	return 0;
}