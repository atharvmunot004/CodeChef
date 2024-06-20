#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> ans(n);
    
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a;
        ans[i] = a;
        
        cin >> b;
        if (b > ans[i]) {
            ans[i] = b;
        }
        
        cin >> c;
        if (c > ans[i]) {
            ans[i] = c;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
