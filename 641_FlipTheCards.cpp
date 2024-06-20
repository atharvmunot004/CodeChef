#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;
        
        ans[i] = min (y, x - y);
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
    
}
