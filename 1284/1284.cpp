#include <iostream>
#include <string>

using namespace std;

int main() {
	string N = "";
	int rst;
	
	while (cin >> N && N != "0") {
		rst = 1;
		for (string::iterator it = N.begin(); it != N.end(); ++it) {
			switch (*it)
			{
			case '1':
				rst += 2;
				break;
			case '0':
				rst += 4;
				break;
			default:
				rst += 3;
				break;
			}
			rst += 1;
		}
		cout << rst << "\n";
	}

	return 0;
}