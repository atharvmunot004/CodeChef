#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int x, y;
        cin >> x >> y;
        
        ans[i] = max((1500 - (2*x) - (6*y)), (1500 - (6*x) - (4*y)));
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
