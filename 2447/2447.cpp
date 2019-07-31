#include <iostream>

using namespace std;

class starDraw
{
public:
	starDraw(int N);
	void startDrawing();
	void print_result();
	~starDraw();
	int **arr;
private:
	int N;
	void draw(int N, int x_pos, int y_pos);
};

starDraw::starDraw(int N)
{
	starDraw::N = N;
	starDraw::arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[N];
		for (int j = 0; j < N; j++) {
			arr[i][j] = 0;
		}
	}
}

starDraw::~starDraw()
{	
	for (int i = 0; i < N; i++) { 
		delete[] arr[i]; 
	}
	delete[] arr;
}

void starDraw::draw(int size, int x_pos, int y_pos)
{
	if (size == 3) {
		arr[y_pos][x_pos] = 1;
		arr[y_pos][x_pos + 1] = 1;
		arr[y_pos][x_pos + 2] = 1;
		arr[y_pos + 1][x_pos] = 1;
		arr[y_pos + 1][x_pos + 2] = 1;
		arr[y_pos + 2][x_pos] = 1;
		arr[y_pos + 2][x_pos + 1] = 1;
		arr[y_pos + 2][x_pos + 2] = 1;
	}
	else {
		int next_size = size / 3;
		draw(next_size, x_pos, y_pos);
		draw(next_size, x_pos + next_size, y_pos);
		draw(next_size, x_pos + 2 * next_size, y_pos);
		draw(next_size, x_pos, y_pos + next_size);
		draw(next_size, x_pos + 2 * next_size, y_pos + next_size);
		draw(next_size, x_pos, y_pos + 2 * next_size);
		draw(next_size, x_pos + next_size, y_pos + 2 * next_size);
		draw(next_size, x_pos + 2 * next_size, y_pos + 2 * next_size);
	}
}

void starDraw::startDrawing() {
	draw(starDraw::N, 0, 0);
}

void starDraw::print_result() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j]) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main() {
	int N;
	cin >> N;
	starDraw stardraw(N);
	stardraw.startDrawing();
	stardraw.print_result();

	return 0;
}