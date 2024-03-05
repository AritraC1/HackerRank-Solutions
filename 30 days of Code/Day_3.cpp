// Day 3: Intro to Conditional Statements

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Condition 1
    if (n%2 != 0) {
        cout << "Weird" << endl;
    }
    
    // Condition 2
    else if (n%2 == 0 && 2<=n && n<=5) {
        cout << "Not Weird" << endl;
    }
    
    
    // Condition 3
    else if (n%2 == 0 && 6<=n && n<=20) {
        cout << "Weird" << endl;
    }
    
    // Condition 4
    else if (n%2 == 0 && n>20) {
        cout << "Not Weird" << endl;
    }
}