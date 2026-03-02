#include <iostream>
using namespace std;

int main()
{
    // watermelon weight
    int w;
    cin >> w;

    // input condition 1 ≤ n ≤ 100
    if (w >= 1 && w <= 100)
    {
        // if weight is divisible and greater than 2 -> cause we need even not odd.
        // 2/2 = 1+1 , 1 is odd
        // 4/2 = 2+2 , 2 is even
        if (w % 2 == 0 && w > 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}