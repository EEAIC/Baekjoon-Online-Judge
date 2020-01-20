#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool word_compare(string a_word, string b_word) {
    if (a_word.length() < b_word.length()) {
        return true;
    } else if (a_word.length() > b_word.length()) {
        return false;
    } else {
        return a_word < b_word;
    }
}

int main() {
    int N;
    cin >> N;
    string* words = new string[N];

    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

    sort(words, words + N, word_compare);

    for (int i = 0; i < N; i++) {
        if (i > 0 && words[i - 1] == words[i]) continue;
        cout << words[i] << "\n";
    }

    return 0;
}