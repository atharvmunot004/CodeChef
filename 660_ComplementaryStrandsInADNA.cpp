#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int len;
        cin >> len;
        
        for (int j = 0; j < len; j ++) {
            char Gene;
            cin >> Gene;
            
            if (Gene == 'A') {
                ans[i] += "T";
            }
            else if (Gene == 'T') {
                ans[i] += "A";
            }
            else if (Gene == 'C') {
                ans[i] += "G";
            }
            else {
                ans[i] += "C";
            }
        }
    }
    
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
