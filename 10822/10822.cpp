#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int rst = 0;
    char input[101];
    cin >> input;
    char *token = strtok(input, ",");
    while(token != NULL){
        rst += stoi(token);
        token = strtok(NULL, ",");
    }

    cout << rst;

    return 0;
}