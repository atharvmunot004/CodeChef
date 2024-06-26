#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i++) {
        double x, n;
        cin >> x >> n;
        
        if (n > (x * 100)) {
            ans[i] = ceil((n - (x * 100)) / 100);
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
