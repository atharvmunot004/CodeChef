#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;
        
        if (y >= x) {
            ans[i] = x;
        }
        
        else {
            ans[i] = y + (2*(x - y));
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;

}
