#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n, k;
        cin >> n >> k;
        
        for (int j = 0; j < n; j ++) {
            int val;
            cin >> val;
            
            if ((val + k) % 7 == 0) {
                ans[i] ++;
            }
        }
    }
    
    
    for (int i : ans) {
        cout << i << endl;
    }
    return 0;
	// your code goes here

}
