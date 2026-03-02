#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int splitString(string s)
{
    stringstream splitedString(s);
    int addNum = 0;
    string word;
    // redirect word each after spaces
    while (splitedString >> word) {
        // convert string to number and add to addNum
        addNum += stoi(word);
    }

    return addNum;
}

int main()
{
    int n = 0, numberOfCanSolve = 0;
   
    
    cin>>n;
    
    // ignore leaving new line charc from "n" input
    // otherwise it will cause issue with next input to behave as input completed.
    cin.ignore(); 
    
    for (int i = 0; i < n; i++ ) {
        string problem;
        // read the full line
        getline(cin, problem);
        int canSolve = splitString(problem);

        if ( canSolve > 1 ) {
            numberOfCanSolve++;
        }
    }

    cout<< numberOfCanSolve <<endl;

    return 0;
}
