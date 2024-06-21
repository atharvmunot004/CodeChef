#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        
        if ((x + y) > 10) {
            ans[i] = 21 - (x + y);
        }
        else {
            ans[i] = -1;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
