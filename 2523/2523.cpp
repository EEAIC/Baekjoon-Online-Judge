#include <iostream>

using namespace std;

class starDraw
{
public:
	starDraw(int N);
	~starDraw();
	int** arr;
	int N;
	void Draw_print();
private:
	void Draw();
};

starDraw::starDraw(int N)
{
	starDraw::N = N;
	arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[2 * N - 1];
		for (int j = 0; j < 2 * N - 1; j++) {
			arr[i][j] = 0;
		}
	}

}


starDraw::~starDraw()
{
	delete[] *arr;
	delete[] arr;
}

void starDraw::Draw() {
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (j <= i && i <= -j + 2 * (N - 1)) {
				arr[j][i] = 1;
			}
		}
	}
}

void starDraw::Draw_print() {
	Draw();
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[j][i]) cout << "*";			

			if (j == N - 1) {
				cout << "\n";
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	starDraw star(N);
	star.Draw_print();

	return 0;
}