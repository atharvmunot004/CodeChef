#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans[n];
    
    for (int i = 0; i < n; i ++) {
        double n, x;
        cin >> n >> x;
        
        if (x >= n) {
            ans[i] = 0;
            continue;
        }
        else {
            ans[i] = ceil ((n - x) / 4);
        }
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
