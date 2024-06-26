#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int x, y;
        cin >> x >> y;
        
        ans[i] = abs(((x - 1) / 10) - ((y - 1) / 10));
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    return 0;
}
