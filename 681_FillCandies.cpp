#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        double num, k, m;
        cin >> num >> k >> m;
        
        ans[i] = (int) ceil (num / (m * k));
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    return 0;
}
