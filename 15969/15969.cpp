#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, min, max;
    cin >> N;

    int *students = new int [N]; 
    
    for (int i = 0; i < N; i++) {
        cin >> students[i];
    }

    nth_element(students, students, students + N);
    min = students[0];

    nth_element(students, students + N - 1, students + N);
    max = students[N - 1];
    
    cout << max - min;

    return 0;
}