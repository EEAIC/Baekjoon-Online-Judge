#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    string vowels = "aeiou";
    getline(cin, sentence);

    for(string::iterator sit = sentence.begin(); sit != sentence.end(); ++sit){
        if (vowels.find(*sit) != string::npos) {
            sit += 2;
        }
        cout << *sit;
    }

    return 0;
}