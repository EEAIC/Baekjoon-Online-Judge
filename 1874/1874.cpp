#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a;
	int ptr = 1;
	bool no = false;
	stack<int> stk;
	vector<char> rst;
	vector<char>::iterator it;
	cin >> n;
	int *input = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a;
		input[i] = a;
	}

	for (int i = 0; i < n; i++) {
		if (no) {
			break;
		}

		if (!stk.empty()) {
			while (input[i] != stk.top()) {
				if (stk.top() >= input[i]) {
					stk.pop();
					rst.push_back('-');
				}
				else {
					if (input[i] >= ptr) {
						stk.push(ptr);
						rst.push_back('+');
						ptr++;
					}
					else {
						no = true;
						break;
					}
				}
			}

			if (input[i] == stk.top()) {
				stk.pop();
				rst.push_back('-');
			}
		} else {
			if (input[i] >= ptr) {
				stk.push(ptr);
				rst.push_back('+');
				ptr++;
				i--;
			}
			else {
				no = true;
				break;
			}
		}
	}

	if (no) {
		cout << "NO\n";
	}
	else {
		for (it = rst.begin(); it != rst.end(); ++it) {
			cout << *it << "\n";
		}
	}

	delete[] input;

	return 0;
}