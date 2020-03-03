#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string stmp;
    int tmp[3];

    cin >> tmp[0] >> tmp[1] >> tmp[2];

    sort(tmp, tmp + 3);
    
    cin >> stmp;

    for (string::iterator sit = stmp.begin(); sit != stmp.end(); ++sit) {
        switch (*sit)
        {
        case 'A':
            cout << tmp[0];
            break;
        case 'B':
            cout << tmp[1];
            break;
        case 'C':
            cout << tmp[2];
            break;        
        default:
            break;
        }
        cout << " ";
    }

    return 0;
}