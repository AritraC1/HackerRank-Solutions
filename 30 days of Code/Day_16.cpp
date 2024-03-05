// Day 16: Exceptions - String to Integer

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    
    try 
    {
        int i = stoi(S);
        cout<<i;
    } 
    
    catch (exception e) 
    {
        cout<<"Bad String";
    }
    
    return 0;
    
}
