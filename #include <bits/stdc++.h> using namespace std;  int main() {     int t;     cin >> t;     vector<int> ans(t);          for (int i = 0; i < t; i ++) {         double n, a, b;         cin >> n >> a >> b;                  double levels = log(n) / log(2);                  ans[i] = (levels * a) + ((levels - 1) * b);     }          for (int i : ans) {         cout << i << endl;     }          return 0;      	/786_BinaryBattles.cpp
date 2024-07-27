#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        double n, a, b;
        cin >> n >> a >> b;
        
        double levels = log(n) / log(2);
        
        ans[i] = (levels * a) + ((levels - 1) * b);
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
    
	// your code goes here

}
