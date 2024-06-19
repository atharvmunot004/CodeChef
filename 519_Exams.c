#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[n];
    
    for (int i = 0; i < n; i ++) {
        float x, y, z;
        cin >> x >> y >> z;
        
        if ((z / (x * y)) > 0.5) {
            ans[i] = 1;
        }
        else {
            ans[i] = 0;
        }
        
    }
    
    for (int i = 0; i < n; i ++) {
        if (ans[i]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
	// your code goes here

}
