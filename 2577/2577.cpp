#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B, C, result;
	int answer[10] = { 0 };
	cin >> A >> B >> C;
    result = A * B * C;
	string rst_str = to_string(result);
	for (unsigned int i = 0; i < rst_str.length(); i++) {
		answer[stoi(rst_str.substr(i, 1))] += 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << answer[i] << endl;
	}

	return 0;
}