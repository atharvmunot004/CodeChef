#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // The number of test cases
    
    vector<string> ans(n);
    // Array storing the result: "NO" or "YES"
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        // Sum of all the profits
        
        int maxProfit;
        // Max profit to be subtracted
        
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        maxProfit = max({p, q, r, s});
        sum = p + q + r + s;
        
        // Check if maxProfit is greater than the sum of the other profits
        if (maxProfit > sum - maxProfit) {
            ans[i] = "YES";
        } else {
            ans[i] = "NO";
        }
    }
    
    for (const auto& result : ans) {
        cout << result << endl;
    }
    
    return 0;
}
