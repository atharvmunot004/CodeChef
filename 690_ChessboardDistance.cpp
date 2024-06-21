#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        ans[i] = max(abs(x1 - x2), abs(y1 - y2));
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
