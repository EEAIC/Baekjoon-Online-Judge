#include <iostream>

using namespace std;

int main()
{
	int A, B = 0;
	cin >> A >> B;
	if (A > B) cout << ">";
	if (A == B) cout << "==";
	if (A < B) cout << "<";

	return 0;
}
