#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        
        if ((s - (x + y)) >= z) {
            ans[i] = 0;
            continue;
        }
        
        else if (((s - x) >= z) || ((s - y) >= z)) {
            ans[i] = 1;
        }
        else {
            ans[i] = 2;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
