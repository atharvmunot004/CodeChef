#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        double n;
        cin >> n;
        
        ans[i] = ceil(n / 10);
    }
    
    for (int res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
