#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    //  The number of test cases 
    
    vector<string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int a, b;
        cin >> a >> b;
        
        if ((a * 10) > (b * 5)) {
            ans[i] = "FIRST";
        }
        else if ((a * 10) < (b * 5)) {
            ans[i] = "SECOND";
        }
        else {
            ans[i] = "ANY";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;

}
