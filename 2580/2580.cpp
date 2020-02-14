#include <iostream>
#include <vector>

using namespace std;

class Sudoku
{
private:
    /* data */
    int board[9][9] = { 0 };
    vector<pair<int, int>> question_list;

public:
    Sudoku(/* args */);
    ~Sudoku();

    int& operator[](int index);
    void get_promise();
    bool find_number(vector<pair<int, int>>::iterator it);
    void find_answer();
    void print();
};

Sudoku::Sudoku() {

}

Sudoku::~Sudoku() {

}

int& Sudoku::operator[](int index) {
    return Sudoku::board[index / 9][index % 9];
}

void Sudoku::get_promise() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == 0) {
                question_list.push_back(make_pair(i, j));
            }
        }
    }
}

void Sudoku::find_answer() {
    get_promise();
    find_number(question_list.begin());
}



bool Sudoku::find_number(vector<pair<int, int>>::iterator it) {
    bool flag;
    if (it == question_list.end()) {
        return true;
    }
    int i = it->first;
    int j = it->second;
    
    for (int k = 1; k <= 9; k++) {
        flag = true;
        for (int l = 0; l < 9; l++) {
            if (j != l && board[i][l] == k) {
                flag = false;
                break;
            }
        }

        for (int l = 0; l < 9; l++) {
            if (i != l && board[l][j] == k) {
                flag = false;
                break;
            } 
        }

        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 3; n++) {
                if (i != i / 3 * 3 + m && j != j / 3 * 3 + n && board[i / 3 * 3 + m][j / 3 * 3 + n] == k) {
                    flag = false;
                    break;
                }   
            }
        }

        if (flag) {
            board[i][j] = k;
            
            vector<pair<int, int>>::iterator tmp = it; // deep copy

            if (find_number(++tmp) == true) {
                return true;
            } else {
                board[i][j] = 0;
            }
        }
    }

    board[i][j] = 0;
    return false;
}

void Sudoku::print() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    Sudoku sudoku;
    for (int i = 0; i < 81; i++) {
        cin >> sudoku[i];
    }
    sudoku.find_answer();

    sudoku.print();

    return 0;
}