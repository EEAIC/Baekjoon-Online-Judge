#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    string rstr;
    cin >> str;
    rstr = str;
    reverse_copy(begin(str), end(str), begin(rstr));
    cout << (str == rstr);

    return 0;
}