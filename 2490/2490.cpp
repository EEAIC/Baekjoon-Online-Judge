#include <iostream>

using namespace std;

int main() {
	int num, tmp;
	for (int i = 0; i < 3; i++) {
		num = 0;
		for (int j = 0; j < 4; j++) {
			cin >> tmp;
			num += tmp;
		}

		switch (num)
		{
		case 0:
			cout << 'D';
			break;
		case 1:
			cout << 'C';
			break;
		case 2:
			cout << 'B';
			break;
		case 3:
			cout << 'A';
			break;
		case 4:
			cout << 'E';
			break;
		default:
			break;
		}
		cout << "\n";
		
	}

	return 0;
}