#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        float h, x, y;
        
        cin >> h >> x >> y;
        
        h -= y;
        ans[i]++;
        
        if (h > 0) {
            ans[i] += ceil (h / x);
        }
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
    
	// your code goes here

}
