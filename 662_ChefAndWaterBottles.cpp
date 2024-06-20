#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int num, x, k;
        cin >> num >> x >> k;
        
        if ((k / x) >= num) {
            ans[i] = num;
        }
        else {
            ans[i] = (k / x);
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    return 0;
}
