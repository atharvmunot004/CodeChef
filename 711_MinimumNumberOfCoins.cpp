#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int x;
        cin >> x;
        
        if (x % 5) {
            ans[i] = -1;
        }
        
        else {
            ans[i] = (x / 10) + ((x % 10) / 5);
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
