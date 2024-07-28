#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int len, p, x, y;
        cin >> len;
        cin >> p;
        cin >> x;
        cin >> y;
        ans[i] = 0;
        
        for (int j = 0; j < len; j ++) {
            int per;
            cin >> per;
            
            if ((per == 0) && (j < p)) {
                ans[i] += x;
            }
            else if ((per == 1) && (j < p)) {
                ans[i] += y;
            }
        }
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
    
	// your code goes here

}
