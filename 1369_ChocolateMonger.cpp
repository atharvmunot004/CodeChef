#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> chocolates(n);
        for (int i = 0; i < n; ++i) {
            cin >> chocolates[i];
        }
        
        set<int> distinctFlavors(chocolates.begin(), chocolates.end());
        
        int maxDistinctSabrina = min(static_cast<int>(distinctFlavors.size()), n - x);
        
        cout << maxDistinctSabrina << endl;
    }
    
    return 0;   
}
