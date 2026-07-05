#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int val;
    for (int i = 0; i < 25; i++) 
    {
        cin >> val;
        if (val == 1) 
        {
            cout << abs(i / 5 - 2) + abs(i % 5 - 2);
            return 0;
        }
    }
}
