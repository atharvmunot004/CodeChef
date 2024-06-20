#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans(n);
    
    for (int i = 0; i < n; i ++) {
        int seat;
        cin >> seat;
        
        if (seat < 11) {
            ans[i] = "Lower Double";
        }
        else if (seat < 16) {
            ans[i] = "Lower Single";
        }
        else if (seat < 26) {
            ans[i] = "Upper Double";
        }
        else {
            ans[i] = "Upper Single";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
}
