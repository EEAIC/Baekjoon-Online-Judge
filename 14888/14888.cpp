#include <iostream>

using namespace std;

int *numbers;
int N;
int max_rst = -1000000000;
int min_rst = 1000000000;

void get_answer(int value, int index,  int plus, int minus, int multiple, int divide) {
    if (index >= N) {
        if (value > max_rst) max_rst = value;
        if (value < min_rst) min_rst = value;
        return;
    }

    if (plus) {
        get_answer(value + numbers[index], index + 1, plus - 1, minus, multiple, divide);
    }
    
    if (minus) {
        get_answer(value - numbers[index], index + 1, plus, minus - 1, multiple, divide);
    }
    
    if (multiple) {
        get_answer(value * numbers[index], index + 1, plus, minus, multiple - 1, divide);
    }

    if (divide) {    
        get_answer(value / numbers[index], index + 1, plus, minus, multiple, divide - 1);   
    }
             
}

int main() {    
    int plus_num, minus_num, multiple_num, divide_num;

    cin >> N;
    numbers = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
  
    cin >> plus_num >> minus_num >> multiple_num >> divide_num;
    

    get_answer(numbers[0], 1, plus_num, minus_num, multiple_num, divide_num);

    cout << max_rst << "\n";
    cout << min_rst << "\n";

}
