#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int rst = 0;
    cin >> str;
    string tmp;
    bool minus_only = false;
    for (string::iterator it = str.begin(); it != str.end(); ++it) {
        if (*it == '+' || *it == '-') {
            if (minus_only) {
                rst -= stoi(tmp);
                tmp.clear();
            } else {
                rst += stoi(tmp);
                tmp.clear();
            }

            if (*it ==  '-') {
                minus_only = true;
            }
        } else {
            tmp += *it;
        }
    }

    if (minus_only) {
        rst -= stoi(tmp);
    } else {
        rst += stoi(tmp);
    }

    cout << rst;

}