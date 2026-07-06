#include <iostream>
using namespace std;

int main() {
    int Limak, Bob, year = 0;
    cin >> Limak >> Bob;

    while (Limak <= Bob) {
        Limak *= 3;
        Bob *= 2;
        year++;
    }
    cout << year;
    return 0;
}
