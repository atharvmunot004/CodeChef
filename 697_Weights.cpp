#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i++) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        
        if ((w == x) || (w == y) || (w == z) || (w == (x + y)) || (w == (x + z)) || (w == (y + z)) || (w == (x + y + z))) {
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
