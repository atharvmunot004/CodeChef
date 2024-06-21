#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        // Calculate the total time to complete all levels
        ans[i] = x * y;
        
        // Calculate the number of breaks
        int breaks = x / 3;
        
        // If x is exactly divisible by 3, we should reduce the number of breaks by 1
        // unless x is exactly 3, because there's no break needed after the last level.
        if (x % 3 == 0 && x > 0) {
            breaks -= 1;
        }
        
        // Add the time for the breaks
        ans[i] += breaks * z;
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
