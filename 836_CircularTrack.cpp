
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b, m;
        cin >> a >> b >> m;
        
        int dist = abs(a - b);
        if (dist > (m / 2)){
            ans[i] = m - dist;
        }
        else {
            ans[i] = dist;
        }
    
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
    
	// your code goes here

}
