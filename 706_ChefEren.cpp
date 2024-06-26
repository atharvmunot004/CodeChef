#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n, a, b;
        cin >> n >> a >> b;
        
        ans[i] = (n / 2) * (a + b);
        
        if (n % 2 == 1) {
            ans[i] += b;
        }
    }
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
