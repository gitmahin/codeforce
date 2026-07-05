#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    int scores[51];
    
    for (int i = 1; i <= n; i++) 
    {
        cin >> scores[i];
    }
    int advancers = 0;
    
    for (int i = 1; i <= n; i++) 
    {
        if (scores[i] >= scores[k] && scores[i] > 0) 
        {
            advancers++;
        }
    }
    cout << advancers;
    return 0;
}
