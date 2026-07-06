#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin>>str;

    if (!str.empty()) {
        str[0] = std::toupper(static_cast<unsigned char>(str[0]));
    }
    cout<<str;
    return 0;
}
