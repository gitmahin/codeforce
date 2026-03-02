#include <iostream>
using namespace std;

int main() {

    // number of words
    int n;
    string word;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>word;
        int word_length = word.length();
        // input condition 1 ≤ n ≤ 100
        ( n >= 1 && n <= 100 ) && (( word_length > 10 ) ? cout<<word[0]<<(word_length-2)<<word[(word_length-1)]<<endl : cout<<word<<endl); 
    }
    return 0;
    
}