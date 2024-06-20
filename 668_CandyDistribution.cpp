#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    
    vector<string> ans(n);
    
    for (int i = 0; i < n; i++) {
        int num, x;
        cin >> num >> x;
        
        if ((num % x == 0) && ((num / x) % 2 == 0)) {
            ans[i] = "Yes";
        }
        else {
            ans[i] = "No";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
