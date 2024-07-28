#include <bits/stdc++.h>
using namespace std;

int score (int n, int m, int k, vector<int> &a) {
    int res = 0;
    
    for (int i = 0; i < m; i ++) {
        if (a[i] == 0) {
            return res;
        }
    }
    res = k;
    
    for (int i = m; i < n; i ++) {
        if (a[i] == 0) {
            return res; 
        }
    }
    res = 100; 
    return res;
}

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    for (int i = 0; i < t; i ++) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(n); 
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        
        ans[i] = score(n, m, k, a); 
    }
    
    for (int i = 0; i < t; i ++) {
        cout << ans[i] << endl;
    }

    return 0;
}
