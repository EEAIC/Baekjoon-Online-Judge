#include <iostream>

using namespace std;

int main() {
	int n, tmp;
	cin >> n;
	while(cin >> tmp && tmp) {
		cout << tmp << " is "; 
		if (tmp % n) {
			cout << "NOT ";
		}
		cout << "a multiple of "<< n <<".\n";
	}


	return 0;
}