#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // The number of test cases
    
    vector <string> ans(n);
    // The answer array
    
    for (int i = 0; i < n; i ++) {
        int s;
        cin >> s;
        
        if (s < 51) {
            ans[i] = "LEFT";
        }
        else {
            ans[i] = "RIGHT";
        }
    }
    
    
    for (const auto& result : ans) {
        cout << result << endl;
    }
    
    return 0;
}
