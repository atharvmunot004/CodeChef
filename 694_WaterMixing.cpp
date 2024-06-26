#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        
        if (a > b) {
            if ((a - b) <= y) {
                ans[i] = "YES";
            }
            else {
                ans[i] = "NO";
            }
        }
        
        else if (b > a) {
            if ((b - a) <= x) {
                ans[i] = "YES";
            }
            else {
                ans[i] = "NO";
            }
        }
        
        else {
            ans[i] = "YES";
        }
    }
    
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
