#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        float x, y, r;
        cin >> x >> y >> r;
        
        ans[i] = ceil (((r / 30.0) + x) / y);
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
    
	// your code goes here

}
