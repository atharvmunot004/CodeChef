#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if ((a > c) || (b > d)) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "IMPOSSIBLE" << endl;
        }
        else {
            cout << "POSSIBLE" << endl;
        }
    }
}
