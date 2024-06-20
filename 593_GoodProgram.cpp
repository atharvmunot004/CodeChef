#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // the number of test cases
    
    vector<string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int spa;
        cin >> spa;
        
        if (spa % 4) {
            ans[i] = "NOT GOOD";
        }
        else {
            ans[i] = "GOOD";
        }
    }
    
    for (const auto& res : ans) {
        cout << res <<endl;
    }
    
    return 0;

}
