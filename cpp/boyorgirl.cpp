#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  string username;
  cin>>username;

  if(username.length() < 100) {
   
    unordered_set<char> distinct_chars;  
   
    for (char c: username) {
      distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2) {
      cout<<"IGNORE HIM!";
    }else{
      cout<<"CHAT WITH HER!";
    }

  }

  return 0;
}
