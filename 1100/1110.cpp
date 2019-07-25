#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int tmpN = N;
	int loop = 0;
	do 
	{
		tmpN = tmpN % 10 * 10 + (tmpN / 10 + tmpN % 10) % 10;
		loop++;
	} while (N != tmpN);
	cout << loop;
	return 0;
}