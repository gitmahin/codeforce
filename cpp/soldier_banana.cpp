// https://codeforces.com/problemset/problem/546/A
#include <iostream>
#include <cmath>

int main()
{
    // k = first banana price
    // for i-th banana price for i-th banana will be i*k
    // n = initial dollars
    // w = number of bananas soldier wants to buy
    int k, n, w = 0;

    std::cin >> k >> n >> w;

    // b = soldier have to borrow
    int b = 0;

    // s = sum of total dollars to buy w bananas
    int s = 0;

    if (k >= 1 && w <= 1000 && n <= pow(10, 9) && n >= 0)
    {

        for (int i = 0; i < w; i++)
        {
            s += (i + 1) * k;
        }
    }

    // Get the result of dollars to borrow from friend
    b = s - n;

    if (b > 0)
    {
        std::cout << b << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }

    return 0;
}