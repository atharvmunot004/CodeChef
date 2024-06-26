#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int n;
        cin >> n;
        
        for (int j = 0; j < n; j ++) {
            int age;
            cin >> age;
            
            if ((age >= 10) && (age <= 60)) {
                ++ ans[i];
            }
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
