#include<iostream>
#include<string>
#include <set>
using namespace std;

int main()
{
    string username;
    cin>>username;
    set<char> unique_chars(username.begin(), username.end());
    string result(unique_chars.begin(), unique_chars.end());
    if((result.length())%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
