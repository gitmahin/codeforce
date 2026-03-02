#include<iostream>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    for ( int i = 0; i < n; i++ ){
        string statement;
        cin >> statement;
        
        if (statement.find("++") < 2){
            x++;
        }else{
            x--;
        }
    }
    
    cout<<x;

    return 0;
}
