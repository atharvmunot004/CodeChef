#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b) {
            ans[i] += a;
        }
        else {
            ans[i] += b;
        }
        
        if (c > d) {
            ans[i] += c;
        }
        else {
            ans[i] += d;
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
