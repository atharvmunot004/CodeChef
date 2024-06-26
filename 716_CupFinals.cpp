#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int x, y, d;
        cin >> x >> y >> d;
        
        if (abs(x - y) <= d) {
            ans[i] = "YES";
        }
        else {
            ans[i] = "NO";
        }
        
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
