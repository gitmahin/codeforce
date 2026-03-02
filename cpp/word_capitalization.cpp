#include <iostream>
#include <cmath>

class Utility
{
public:
    std::string word;

    std::string getCapitalizedWord(std::string value)
    {
        std::string capitalized_word = (char)toupper(value[0]) + value.substr(1, -1);
        return capitalized_word;
    };
};

int main()
{
    Utility utility;
    std::string word;
    std::getline(std::cin, word);
    if (word.length() < pow(10, 3) && !word.empty()) {
        std::cout << utility.getCapitalizedWord(word) << std::endl;
    }
    return 0;
}