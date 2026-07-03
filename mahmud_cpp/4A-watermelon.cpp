#include <iostream>
using namespace std;

int main() {
    bool found = false;
    int w;
    cin >> w;

    
    for (int i = 2; i <= w; i++) {
        int y = w - i;
        
        if (i % 2 == 0 && y % 2 == 0) {
            found = true;
            break;
        }
    }

    if (found == true) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
