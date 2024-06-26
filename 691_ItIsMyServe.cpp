#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int p, q;
        cin >> p >> q;
        
       if (((p + q) / 2) % 2 == 0) {
            ans[i] = "Alice";
        } else {
            ans[i] = "Bob";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
