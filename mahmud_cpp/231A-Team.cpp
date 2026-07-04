#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
  
    string temp;
    getline(cin, temp);

    vector<string> problems(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, problems[i]);
    }
    int count = 0;

    for (int i = 0; i < n; ++i) {
        string x = "";

        for (char c : problems[i]) {
            if (c == '1') {
                x += c;
            }
        }
        if (x == "11" || x == "111") {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
