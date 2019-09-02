#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str, fstr, stk, tmpstk;
    string::iterator it;
    string::reverse_iterator rfit;
    bool flag;

    cin >> str >> fstr;
    if (str.size() >= fstr.size()) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == fstr.back()) {
               
                flag = true;
                for (int j = fstr.size() - 2; j >= 0; j--) {
                    if(stk.back() != fstr[j]) {
                        flag = false;
                        for (++j; j < fstr.size() - 1; j++) {
                            stk.push_back(fstr[j]);
                        }
                        break;
                    } else {
                        flag = true;
                        stk.pop_back();
                    }
                }

                if (!flag) {
                    stk.push_back(str[i]);
                }

                
            } else {
                stk.push_back(str[i]);
            }
        } 

        if (stk.size()) {
            cout << stk;
        } else {
            cout << "FRULA";
        }

    } else {
        cout << str;
    }

    return 0;
}
