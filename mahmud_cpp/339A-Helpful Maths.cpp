#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string math;
    cin >> math;
    
    math.erase(remove(math.begin(), math.end(), '+'), math.end());
    sort(math.begin(), math.end());
    
    for(int i=0;i<math.length();i++)
    {
        cout<<math[i];

        if (i < math.length() - 1) 
       {
        cout << "+";
       }
    }
    return 0;
}
