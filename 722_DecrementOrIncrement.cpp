#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    t = 1;
    
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        
        if (n % 4) {
            ans[i] = n - 1;
        }
        else {
            ans[i] = n + 1;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
