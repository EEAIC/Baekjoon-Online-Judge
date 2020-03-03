#include <iostream>

using namespace std;

int main() {
    int burgers[3];
    int beverages[2];

    cin >> burgers[0] >> burgers[1] >> burgers[2] >> beverages[0] >> beverages[1];
    cout << min(min(burgers[0], burgers[1]), burgers[2]) + min(beverages[0], beverages[1]) - 50;

    return 0;
}