#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		int *scores = new int[num];
		int sum = 0;
		float avg = 0;
		int students_over_average = 0;
		for (int i = 0; i < num; i++) {
			cin >> scores[i];
			sum += scores[i];
		}
		avg = (float)sum / num;
		for (int i = 0; i < num; i++) {
			if (scores[i] > avg) {
				students_over_average++;
			}
		}

		delete scores;
		cout << fixed << setprecision(3) << (float)students_over_average / num * 100 << "%" << endl;
	}
	return 0;
}