#include <iostream>

using namespace std;

int main() {
	int N;
	int sum = 0;
	cin >> N;
	char *chars = new char[N];
	
	for (int i = 0; i < N; i++) {
		cin >> chars[i];
		sum += atoi(chars + i);
	}
	cout << sum;

	return 0;
}