#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1;
    //number of test cases
    
    int ans[n];
    // Binary array storing the result: 1 -> Win (Yes), 0 -> Lose (No)
        
    for (int i = 0; i < n; i ++) {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        // The topics prepared (a, b, c) and the topic asked (x)
        
        if ((a == x) || (b == x) || (c == x)) {
            ans[i] = 1; // Win
        }
        else {
            ans[i] = 0; // Lose
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
