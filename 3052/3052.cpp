#include <iostream>
#include <algorithm>  
#include <vector>

using namespace std;

int main()
{
	int nums[10] = { 0 };
	int remainders[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> nums[i];
		remainders[i] = nums[i] % 42;
	}
	vector<int> vectorRemainders(remainders, remainders + 10);
	vector<int>::iterator it;
	sort(vectorRemainders.begin(), vectorRemainders.end());
	it = unique(vectorRemainders.begin(), vectorRemainders.end());
	vectorRemainders.resize(distance(vectorRemainders.begin(), it));

	cout << vectorRemainders.size();
	return 0;
}