#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (((a + c) == 180) && ((b + d) == 180)) {
            ans[i] = "YES";
        }
        else {
            ans[i] = "NO";
        }
    }
    
    for (string res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
