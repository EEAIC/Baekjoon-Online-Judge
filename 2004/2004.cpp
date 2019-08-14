#include <iostream>
#include <cmath>

using namespace std;

int get_numbers_of_mutiple(int multiple, int x);

int main() {
	int n, m;
	int n_five, m_five;
	int n_two, m_two, rst;
	cin >> n >> m;

	n_five = get_numbers_of_mutiple(5, n);
	n_five -= get_numbers_of_mutiple(5, n - m);
	m_five = get_numbers_of_mutiple(5, m);

	n_two = get_numbers_of_mutiple(2, n);
	n_two -= get_numbers_of_mutiple(2, n - m);
	m_two = get_numbers_of_mutiple(2, m);

	rst = n_five - m_five > n_two - m_two ? n_two - m_two : n_five - m_five;
	cout << rst;
}

int get_numbers_of_mutiple(int multiple ,int x) {
	int num = 0;
	for (int i = 1; pow(multiple, i) <= x; i++) {
		num += x / (int)pow(multiple, i);
	}

	return num;
}