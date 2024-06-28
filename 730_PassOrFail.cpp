#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n, x, p;
        cin >> n >> x >> p;
        if (((x * 3) - (n - x)) < p) {
            ans[i] = "FAIL";
        }
        else {
            ans[i] = "PASS";
        }
    }
    
    for (string res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
