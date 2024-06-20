#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int N, x, y;
        cin >> N >> x >> y;
        
        if (((N * x) >= y) && ((y % x) == 0)) {
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
