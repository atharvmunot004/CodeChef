#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i= 0; i < n; i ++) {
        int t;
        cin >> t;
        
        if (t < 8) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
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
	// your code goes here

}
