#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        int n;
        cin >> n;
        ans[i] = n * 10;
    }
    
    for (int i = 0; i < n; i ++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
