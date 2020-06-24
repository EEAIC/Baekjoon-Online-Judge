#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    queue<int> card;
    cin >> N; 

    for (int i = 1; i <= N; i++) {        
        card.push(i);
    }

    while(card.size() != 1) {
        cout << card.front();
        card.pop();
        card.push(card.front());
        card.pop();
        cout << " ";
    }
    cout << card.front();

    return 0;
}
