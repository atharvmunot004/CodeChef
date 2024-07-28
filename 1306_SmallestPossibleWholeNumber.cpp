#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int n, k;
        cin >> n;
        cin >> k;
        
        if (k == 0) {
            ans[i] = n; // If k is 0, print n directly
        } else {
            ans[i] = n % k;
        }
    }
    
    for (int i = 0;  i < n; i ++) {
        cout << ans[i] << endl;
    }
    
    return 0;
	// your code goes here

}
