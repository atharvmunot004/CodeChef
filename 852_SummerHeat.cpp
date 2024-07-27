#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        float xa, xb, XA, XB;
        cin >> xa >> xb >> XA >> XB;
        
        ans[i] = ceil(XA / xa) + ceil(XB / xb);
        
        cout << ans[i] << endl;
    }
    return 0;
	// your code goes here

}
