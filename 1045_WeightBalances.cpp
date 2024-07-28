#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int w1, w2, x1, x2, m, diff;
        cin >> w1;
        cin >> w2;
        cin >> x1;
        cin >> x2;
        cin >> m;
        diff = w2 - w1;
        
        if ((diff >= (x1 * m)) && (diff <= (x2 * m))) {
            ans[i] = 1;
        }
        else { 
            ans[i] = 0;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    return 0;
	// your code goes here

}
