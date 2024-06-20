#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // The number of test cases
    
    vector <string> ans(n);
    // The string array containting the answer
    
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        // The 3 temperature conditions
        
        if ((b >= a) && (b >= c)) {
            ans[i] = "Yes";
        }
        else {
            ans[i] = "No";
        }
    }
    
    for (const auto& result : ans) {
        cout << result << endl;
    }
}
