#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i ++) {
        // number of test cases
        
        int n;
        cin >> n;
        
        vector<int> marks(n);
        
        for (int j = 0; j < n; j ++) {
            cin >> marks[j];
        }
        
        int flex = 0;
        
        for (int j = 0; j < n; j ++) {
            int less = 0;
            for (int k = 0; k < n; k ++) {
                if (marks[k] <= marks[j]) {
                    ++ less;
                }
            }
            
            if (less > (n - less)) {
                ++flex;
            }
        }
        
        cout << flex << endl;
        
    }
    
    return 0;
}
