#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        
        if (x <= 100) {
            ans[i] = x;
        }
        else if (x <= 1000) {
            ans[i] = x - 25;
        }
        else if (x <= 5000) {
            ans[i] = x - 100;
        }
        else {
            ans[i] = x - 500;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
	// your code goes here

}
