#include <iostream>
#include <string>

using namespace std;

int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;
	A = A + B;
	C = C + D;
	cout << atoll(A.c_str()) + atoll(C.c_str());

	return 0;
}