#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	stack<int> rst;
	cin >> str;
	string::reverse_iterator rit;
	int step = 0;
	int num = 0;
	for (rit = str.rbegin(); rit != str.rend(); ++rit) {
		if (*rit == '1') {
			switch (step)
			{
			case 0:
				num += 1;
				break;
			case 1:
				num += 2;
				break;
			case 2:
				num += 4;
				break;
			default:
				break;
			}
		}

		if (step != 2) {
			step++;
		}
		else {
			rst.push(num);
			num = 0; 
			step = 0;
		}
	}

	if (num != 0) {
		rst.push(num);
	}

	if (rst.empty()) {
		cout << 0;
	}

	while (!rst.empty()) {
		cout << rst.top();
		rst.pop();
	}

	return 0;
}