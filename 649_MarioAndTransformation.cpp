#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ans(n);
    
    for (int i = 0; i < n; i++) {
        int mush;
        cin >> mush;
        
        if(mush % 3 == 0) {
            ans[i] = "NORMAL";
        }
        else if (mush % 3 == 1) {
            ans[i] = "HUGE";
        }
        else {
            ans[i] = "SMALL";
        }
    }
    
    for (const auto& res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
