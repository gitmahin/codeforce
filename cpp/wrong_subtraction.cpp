#include <iostream>
#include <cmath>

class Utility
{
public:
    int getNumLastDigit(int n)
    {
        int num_length = (int)std::to_string(n).length() - 1;
        std::string num_str = std::to_string(n);
        int last_digit = num_str[num_length] - '0';
        return last_digit;
    };
};

int main()
{
    int n;
    int k;
    Utility utility;

    std::cin >> n;
    std::cin >> k;

    if (2 <= n <= pow(10, 9) && 1 <= k <= 50)
    {

        for (int i = 0; i < k; i++)
        {
            int last_digit = utility.getNumLastDigit(n);
            if (last_digit == 0)
            {
                n = n / 10;
            }
            else
            {
                n = n - 1;
            }
        };
    }

    std::cout << n << std::endl;
    return 0;
}