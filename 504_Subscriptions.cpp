#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int n, x;
        cin >> n >> x;
        
        ans[i] = x * (n / 6);
        
        if (n % 6) {
            ans[i] += x;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
	// your code goes here

}
