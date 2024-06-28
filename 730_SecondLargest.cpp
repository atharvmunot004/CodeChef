#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        set<int> vals;
        vals.insert(a);
        vals.insert(b);
        vals.insert(c);
        
        set<int>::iterator itr = vals.begin();
        ++ itr;
        
        ans[i] = *itr;
    }
    
    for (int res : ans) {
        cout << res << endl;
    }
    
    return 0;
}
