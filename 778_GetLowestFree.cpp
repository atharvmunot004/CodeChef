#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int a, b, c;
        cin >> a >> b >> c;
        multiset<int, greater<int>> vals = {a, b, c};
        auto itr = vals.begin();
        
        ans[i] = *itr + *(++itr);
        
    }
    
    for (int i : ans) {
        cout << i << endl;
    }
    
    return 0;
    
    
}
