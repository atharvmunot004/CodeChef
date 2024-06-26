#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0 ; i < t; i ++) {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        
        if ((a / x) > (b / y)) {
            ans[i] = "Alice";
        }
        else if ((a / x) < (b / y)) {
            ans[i] = "Bob";
        }
        
        else {
            ans[i] = "Equal";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
