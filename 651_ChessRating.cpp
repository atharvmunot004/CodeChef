#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> ans(n);
    
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        
        ans[i] = ceil((y - x) / 8);
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
    
}
