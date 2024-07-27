#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    
    for (int i = 0; i < t; i ++) {
        int x, y;
        cin >> x >> y;
        
        if (x < y) {
            ans[i] += y - x;
        }
        
        else if (x == y){
            ans[i] = 0;
        }
        else {
            ans[i] = ((x - y) / 2) + 2 * ((x - y) % 2);
        }
        cout << ans[i] << endl;
    }

}
