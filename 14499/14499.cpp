#include <iostream>

using namespace std;

class Dice
{
private:
    /* data */
    int top, bottom, front, back, left, right;
    int **map;
    int x, y;
    int m, n;
public:
    Dice(int N, int M, int X, int Y);
    ~Dice();
    int& get(int i, int j);
    void roll(int d);
};

Dice::Dice(int N, int M, int X, int Y)
{
    top = 0;
    left = 0;
    front = 0;
    right = 0;
    back = 0;
    bottom = 0;
    map = new int*[N];
    for (int i = 0; i < N; i++) {
        map[i] = new int[M];
    }
    x = X;
    y = Y;
    n = N;
    m = M;
}

Dice::~Dice()
{
}

int& Dice::get(int i, int j)
{
    return map[i][j];
}

void Dice::roll(int d) 
{
    int tmp;
    switch (d)
    {
        case 1:
            if (y == m - 1){
                return;
            } else {
                tmp = top;
                top = left;
                left = bottom;
                bottom = right;
                right = tmp;                
                y += 1;
            }
            break;
        case 2:

            if (y == 0){
                return;
            } else {
                tmp = top;
                top = right;
                right = bottom;
                bottom = left;
                left = tmp;                
                y -= 1;
            }
            break;
        case 3:

            if (x == 0){
                return;
            } else {
                tmp = top;
                top = front;
                front = bottom;
                bottom = back;
                back = tmp;
                x -= 1;
            }
            break;
        case 4:
            if (x == n - 1){
                return;
            } else {
                tmp = top;
                top = back;
                back = bottom;
                bottom = front;
                front = tmp;
                x += 1;
            }
            break;
        default:
            break;
    }

    if (map[x][y] == 0) {
        map[x][y] = bottom;
    } else {
        bottom = map[x][y];
        map[x][y] = 0;
    }

    cout << top << "\n";
    return;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, x, y, K, direction;
    cin >> N >> M;
    cin >> x >> y >> K;
    Dice dice = Dice(N, M, x ,y);

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> dice.get(i, j);
        }
    }
    

    for (int i = 0; i < K; i++) {
        cin >> direction;
        dice.roll(direction);
    }

    return 0;

}