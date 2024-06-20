#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector <string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int x, a, b;
        cin >> x >> a >> b;
        if (x > (a + b + b)) {
            ans[i] = "NotQualify";
        }
        else {
            ans[i] = "Qualify";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
