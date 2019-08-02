#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	map<char, int> alphabets;
	map<char, int>::iterator it;
	pair<char, int> max;
	max = make_pair('A', 0);
	int max_count = 0;
	string word;
	cin >> word;
	transform(word.begin(), word.end(), word.begin(), ::toupper);
	for (unsigned int i = 0; i < word.size(); i++) {
		alphabets[word.at(i)] += 1;
	}
	
	for (map<char, int>::iterator it = alphabets.begin(); it != alphabets.end(); ++it)
	{
		if (max.second < it->second) {
			max = make_pair(it->first, it->second);
			max_count = 1;
		}
		else if (max.second == it->second) {
			max_count += 1;
			
		}
	}
	
	if (max_count > 1) {
		cout << "?";
	}
	else {
		cout << max.first;
	}

	return 0;
}