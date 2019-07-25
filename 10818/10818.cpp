#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int loop;
	cin >> loop;
	int *numbers = new int[loop];
	for (int i = 0; i < loop; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers + loop);
	cout << *numbers << " "<< *(numbers + loop - 1);
	delete numbers;
	return 0;
}