#include <iostream>

using namespace std;

int main()
{
	int number_A = 0;
	int number_B = 0;

	cin >> number_A >> number_B;
	cout << number_A * (number_B % 10) << endl;
	cout << number_A * (number_B % 100 / 10) << endl;
	cout << number_A * (number_B / 100) << endl;
	cout << number_A * number_B;
	
	return 0;
}
