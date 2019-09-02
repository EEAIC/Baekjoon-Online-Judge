#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, hp, mp, attack, defense, _hp, _mp, _attack, _defense;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> hp >> mp >> attack >> defense >> _hp >> _mp >> _attack >> _defense;
        hp = hp + _hp;
        if (hp < 1) hp = 1;

        mp = mp + _mp;
        if (mp < 1) mp = 1;

        attack = attack + _attack;
        if (attack < 0) attack = 0;

        defense = defense + _defense;

        cout << hp + 5 * mp + 2 * attack + 2 * defense << "\n";
    }

    return 0;
}