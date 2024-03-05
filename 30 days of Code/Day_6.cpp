//Day 6: Let's Review

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        
        string S;
        cin >> S;
        
        for (int j = 0; j < S.length(); j++) {
            
            if (j % 2 == 0) {
                
                cout << S[j];
            }
        }
        
        cout << " ";
        
        for (int j = 0; j < S.length(); j++) {
            
            if (j % 2 != 0) {
                
                cout << S[j];
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
