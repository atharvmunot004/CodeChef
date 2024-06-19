#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int n, x;
        cin >> n >> x;
        
        ans[i] = (n * x) / 4;
        
        if ((n * x) % 4 ) {
            ans[i] ++;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
	// your code goes here

}
