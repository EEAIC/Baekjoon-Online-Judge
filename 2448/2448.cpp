#include <iostream>

using namespace std;

class starDraw
{
public:
	starDraw(int N);
	~starDraw();
	int N;
	int** arr;
	void Draw_print();
private:
	void Draw(int size, int X_pos, int Y_pos);
	
};

starDraw::starDraw(int N)
{
	starDraw::N = N;
	arr = new int*[2 * N];
	for (int i = 0; i < 2 * N; i++) {
		arr[i] = new int[N];
		for (int j = 0; j < N; j++) {
			arr[i][j] = 0;
		}
	}
}

starDraw::~starDraw()
{
	delete[] *arr;
	delete[] arr;
}

void starDraw::Draw(int size, int X_pos, int Y_pos)
{
	if (size == 3) {
		arr[X_pos][Y_pos] = 1;
		arr[X_pos - 1][Y_pos + 1] = 1;
		arr[X_pos + 1][Y_pos + 1] = 1;
		arr[X_pos - 2][Y_pos + 2] = 1;
		arr[X_pos - 1][Y_pos + 2] = 1;
		arr[X_pos][Y_pos + 2] = 1;
		arr[X_pos + 1][Y_pos + 2] = 1;
		arr[X_pos + 2][Y_pos + 2] = 1;
	}
	else {
		starDraw::Draw(size / 2, X_pos , Y_pos);
		starDraw::Draw(size / 2, X_pos - size / 2, Y_pos + size / 2);
		starDraw::Draw(size / 2, X_pos + size / 2, Y_pos + size / 2);

	}
}

void starDraw::Draw_print() {
	Draw(N, N - 1, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N; j++) {
			if (arr[j][i]) cout << "*";
			else cout << " ";

			if (j == 2 * N - 1) {
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