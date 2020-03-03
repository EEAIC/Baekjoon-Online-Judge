#include <iostream>

using namespace std;

int main() {
    int max_length = 0;
    string* str = new string[5];
    for (int i = 0; i < 5; i++) {
        cin >> str[i];
        if (str[i].length() > max_length) max_length = str[i].length();
    }

    for (int i = 0; i < max_length; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < str[j].length()) {
                cout << str[j].at(i);
            }
        }
    }
    return 0;
}