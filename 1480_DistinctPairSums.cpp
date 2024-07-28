#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int l, r;
        cin >> l;
        cin >> r;
        
        ans[i] = (2 * r) - (2 * l) + 1;
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
    return 0;
	// your code goes here

}
