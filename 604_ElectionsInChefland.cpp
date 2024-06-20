#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++) {
        int N, x;
        cin >> N >> x;
        
        for (int j = 0; j < N; j ++) {
            int age;
            cin >> age;
            
            if (age >= x) {
                ++ans[i];
            }
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;

}
