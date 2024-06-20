#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int x, y, m;
        cin >> x >> y >> m;
        
        if ((y / x) <= m){
            ans[i] = m - (y/x);
        }
        else {
            ans[i] = 0;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
